#include <iostream>
using namespace std;
void nhapSo(int a[], int n)
{
    for(int i=0;i<n;i++){
     cin >> a[i];
    }
}
double trungBinhcong(int a[], int n)
{
    double avg;
    int sum =0;
    for(int j=0;j<n;j++){
        sum +=a[j];
    }
    avg =(double)sum/n;
    return avg;
}
int numMAX(int a[], int n)
{
    int tempmax = a[0];
    for(int j=1;j<n;j++){
        if (tempmax < a[j]){
             tempmax = a[j];
        }
    }
    return tempmax;
}
int numMIN(int a[], int n)
{

    int tempmin = a[0];

    for(int j=1;j<n;j++){
        if (tempmin>a[j]){
            tempmin = a[j];
        }
        return tempmin;
}
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    nhapSo(a, n);
    cout << "Mean :" << trungBinhcong(a,n)<< endl;
    cout << "Max :"  << numMAX(a, n) << endl;
    cout << "Min :"  << numMIN(a, n) << endl;
    return 0;

}
