#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int x){
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int middle = (left + right) / 2;

        if (arr[middle] == x)
            return middle;
        else if (arr[middle] < x)
            left = middle + 1;
        else
            right = middle - 1;
    }
    return -1;
}