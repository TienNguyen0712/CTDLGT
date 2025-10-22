// Ý tưởng
// So sánh và sắp xếp các phần tử cách nhau một khoảng 
// thay vì liền kề, dần đân giảm khoảng cách xuống 1

// Gỉa sử có mảng A gồm n phần tử: 
// 1. Chọn 1 giá trị khoảng cách ban đầu thường là n/2
// 2. Sắp xếp các phần tử cách nhau gap vị trí (Dùng insertion sort)
// 3. Giảm gap theo dãy 
// 4. Lặp lại cho đến khi gap = 1

// Mã giả 
// Chia data thành h mảng con:
//      for i = 1 đến h
//              sắp xếp mảng data thứ i;
//      sắp xếp mảng data;

#include <iostream>

using namespace std;

void shellSort(int data[], int n){
    int i, j, hCnt, h;
    int increments[20], k;
    // Tạo dãy lưu khoảng cách 
    for (h = 1, i = 0; h < n; i++){
        increments[i] = h;
        h = 3*h + 1;
    }
    // Duyệt dãy khoảng cách lớn -> nhỏ 
    for (i--; i >= 0; i--){
        h = increments[i];

        // isertion sort với khoảng cách h
        for (hCnt = h; hCnt < n; hCnt++){
            for (j = hCnt; j < n; ){
                int tmp = data[j];
                k = j;
                while (k - h >= 0 && tmp < data[k - h])
                {
                    data[k] = data[k - h];
                    k-=h;
                }
                data[k] = tmp;
                j += h;
            }
        }        
    }
}