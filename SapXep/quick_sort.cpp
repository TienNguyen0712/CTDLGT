// Ý tưởng 
// // Chia mảng ban đầu thành các mảng con
// sắp xếp chúng riêng biệt và sau đó 
// chia chúng một lần nữa để sắp xếp các màng con 
// mới cho đến khi toàn bộ mảng được sắp xếp

// // Mảng ban đầu được chia thành hai mảng con 
// mảng đầu chứa các giá trị nhỏ hơn giá trị pivot 
// và mảng sau chứa các giá trị lớn hơn hoặc bẳng pivot

// Qúa trình được lặp lại với các mảng con

#include <iostream>

using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// C1
void quickSort(int data[], int first, int last){
    int lower = first + 1, upper = last;
    swap(data[first], data[(first + last)/2]);
    int pivot = data[first];
    while (lower <= upper)
    {
        while (pivot > data[lower])
            lower++;
        while (pivot < data[upper])
            upper--;
        if (lower < upper)
            swap(data[lower++], data[upper--]);  
        else lower++;      
    }
    swap(data[upper], data[first]);
    if (first < upper-1)
        quickSort(data, first, upper - 1);
    if (upper + 1 < last)
        quickSort(data, upper + 1, last);
}

// C2
void quickSort(int arr[], int left, int right){
    if (left < right){
        int pivot = partition(arr, left, right);

        quickSort(arr, left, pivot - 1);
        quickSort(arr, pivot + 1, right);
    };
}

int partition(int arr[], int left, int right){
    int pivot = arr[right];
    int i = left - 1;

    for (int j = left; j <= right - 1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[right]);

    return i;
}