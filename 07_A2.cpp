#include <iostream>
using namespace std;
int Array (int* a)
{
    int n;
    cout << sizeof(a[n]) << endl;
}
int main()
{
    int N=10;
    int A[N];
    cout << sizeof(A[N]) << endl;
    Array(A);
    int arr[N] = {1,2,3};
    cout << sizeof(arr[N]) << endl;
    Array(arr);
}
//giong nhau voi mang khong va co xac dinh
