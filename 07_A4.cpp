#include <iostream>
using namespace std;

int binarySearch(int arr[], int *left, int *right, int x) {
    int *middle;

    while(left <= right) {
        middle = left + (right - left)/2;
        if (*middle == x)
            return (middle - &arr[0]);
        if (*middle < x)
            left = middle + 1;
        else
            right = middle - 1;
    }

    return -1;
}
int main() {
    int arr[6] = {1 , 4, 6, 7,9, 13};
    int *l = &arr[0], *r = &arr[5];
    int x = 7;
    int result = binarySearch(arr, l, r, x);

    cout << result;
}
