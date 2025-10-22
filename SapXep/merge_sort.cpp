// Ý tưởng 
// Chia nhỏ mảng thành các mảng con cho
// đến khi có ít hơn hai phần tử thực hiện sắp xếp 
// rôi hợp chúng lại với nhau

#include <iostream>

using namespace std;

void merge(int arr[], int left, int middle, int right){
    int n1 = middle - left + 1; // Phần tử nửa trái
    int n2 = right - middle; // Phần tử nửa phải 

    int L[n1], R[n2]; // Tạo mảng tạo trái, phải

    // Sao chép phần tử vào 2 mảng tạm
    for (int i = 0; i < n1; i++)
        L[i] = arr[i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[j];

    // Gộp hai mảng đã sắp xếp
    int i = 0,j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]){
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    
    // Sao chếp các phần tử còn lại 
    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right){
    if (left < right){
        int middle = (left + (right - 1))/2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}
