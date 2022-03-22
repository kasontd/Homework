#include <iostream>
using namespace std;
int f(int arr[])
{
    cout << &arr << " " << &arr[0];
}
int main()
{
    int n=50;
    int a[n];
    cout << &a <<" "<< &a[0]<< endl;
    f(a);
    return 0;
}
//dia chi mang khac nhau
//dia chi phan tu dau tien giong nhau
