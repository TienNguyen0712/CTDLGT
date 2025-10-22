// Ý tưởng 
// B1: Tìm phần tử lớn nhất trong mảng đó

// B2: Khởi tạo một mảng có độ dài max + 1 với 
// với tất cả các phần tử bằng 0. Mảng này được sử dụng để
// lưu trữ số lần xuất hiện của từng phần tử trong mảng

// B3: Lưu trữ số lần xuất hiện của từng phàn tử trong mảng 
// vào vị trí của mảng đếm 

// B4: Lưu trữ tổng tích lũy của các phần tử trong mảng đếm.
// Điều này giúp đặt các phần tử vào vị trí chính xác trong mảng đã xếp

// B5: Tìm chỉ mục của mỗi phần tử trong mảng gốc trong mảng đếm

// B6: Sau khi đặt đúng vào vị trí, giảm số lần xuất hiện của nó 

#include <iostream>
#include <vector>

using namespace std;

void countingSort(int arr[], int n){
    // B1: 
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max)
            max = arr[i];
    }

    // B2:
    vector<int> count(max + 1, 0);
    vector<int> output(n);

    // B3: 
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    // B4: 
    for (int i = 0; i <= max; i++)
        count[i] += count[i - 1];

    // B5: 
    for (int i = n - 1; i >= 0; i--){
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // B6
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
    
}