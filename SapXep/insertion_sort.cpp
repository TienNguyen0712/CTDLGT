// Ý tưởng 
// Tạo ra một tập hợp các phần tử đã sắp xếp từ một tập hợp các 
// phần tử chưa sắp xếp. Mỗi lần, chúng ta lấy một phần tử từ 
// tập hợp các phần tử chưa sắp xếp và chèn nó vào trị trí thích hợp
// trong tập hợp các phần tử đã sắp xếp. Qúa trình này được lặp đi lặp
// lại cho đến khi các phẩn tử đã được sắp xếp

// Mã giả 
// // Inputs:
// - Một mảng A: Mảng số nguyên cần phải được sắp xếp
// - int n: Độ dài của mảng
// Outputs: 
// - Mảng A: Đã được sắp xếp

#include <iostream>

using namespace std;

void insertionSort(int arr[], int n){
    // Lặp qua các phần tử trong mảng
    for (int i = 1; i < n; i++){
        // Lưu giá trị hiện tại làm value
        int value = arr[i];
        // Bắt đầu so sánh với giá trị trước
        int j = i - 1;
        // Di chuyển phần tử về phải
        // cho đến khi đúng vị trí 
        while (j >= 0 && arr[j] > value)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // Chèn phần tử hiện tại vào vị trí đúng 
        arr[j + 1] = value;
    }
}