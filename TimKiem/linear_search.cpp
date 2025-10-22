#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int x){
    for (int i = 0; i < n; i++){
        if (arr[i] == x)
            return i; // Trả về chỉ số
        return -1; // Không tìm thấy 
    }
}