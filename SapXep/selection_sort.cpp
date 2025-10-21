// // Ý tưởng
// Tìm liên tục phần tử nhỏ nhất trong phần mảng chưa được sắp xếp 
// và hoán đổi nó với phần tử đầu tiên của phần mảng chưa được sắp xếp. 
// Qúa trình này tiếp tục cho đến khi tất cả các phần tử được sắp xếp

// Mã giả 
// // Inputs:
// - Một mảng A: Mảng số nguyên cần phải được sắp xếp
// - int n: Độ dài của mảng
// Outputs: 
// - Mảng A: Đã được sắp xếp

#include <iostream>

using namespace std;

// Hàm hoán đổi hai giá trị trong mảng
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n){
    // Lặp qua các phần tử trong mảng 
    for (int i = 0; i < n-1; i++) {
        // Tìm index của phần tử nhỏ nhất
        // trong mảng chưa sắp xếp 
        int minIndex = i;
        for (int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Đối chỗ giá tri nhỏ với giá trị đầu tiên 
        // trong mảng chưa được sắp xếp
        // chỉ khi chúng khác nhau 
        if (arr[minIndex] != arr[i]) {
            swap(&arr[minIndex], &arr[i]);
        }
    }
}