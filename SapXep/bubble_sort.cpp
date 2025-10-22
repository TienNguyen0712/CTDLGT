// // Ý tưởng 
// Sử dụng lặp để so sánh các cặp phần tử liền kề 
// và hoán đổi chúng nếu cần
// Qúa trình này diễn ra một số lần cho đến khi tập
// hợp dữ liệu được sắp xếp. Mỗi lần qua vòng lặp, 
// phần tử lớn nhất sẽ "nổi" lên đầu tập dữ liệu

// Mã giả 
// // Inputs:
// - Một mảng A: Mảng số nguyên cần phải được sắp xếp
// - int n: Độ dài của mảng
// Outputs: 
// - Mảng A: Đã được sắp xếp

#include <iostream> 

using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n){
    // Lặp qua các phần tử trong mảng 
    // (trừ phần tử cuối)
    for (int i = 0; i < n-1; i++)
    {
        // So sánh phần tử chưa sắp xếp
        for (int j = 0; j < n - i - 1; j++)
        {
            // Nếu phần tử hiện tài lớn hơn
            // phần tử tiếp theo, hoán đổi chúng 
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
