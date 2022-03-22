#include <iostream>
using namespace std;
int count_even1(int* a, int n)
{
    int count =0;
    for(int i=1;i<5;i++){
        if(a[i]%2==0) count ++;
    }
    return count;
}
int count_even2(int* a, int n)
{
    int count =0;
    for(int i=n-1;i>4;i--){
        if(a[i]%2==0) count ++;
    }
    return count;
}
int main()
{
    int arr[10] = {1, 2, 4, 5, 7, 8, 3, 6, 9, 10};
    cout << count_even1(&arr[0], 10) << endl;
    cout << count_even2(&arr[0], 10);
}
