#include <iostream>
using namespace std;
int main()
{
    int n;
    double sum1=0, sum2=0, tb, phuongSai;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int j=0;j<n;j++){
        sum1 += a[j];
    }
    tb =(double)1.0* sum1/n;
    cout << tb << endl;
    for(int y=0;y<n;y++){
        sum2 += (a[y]-tb)*(a[y]-tb);
    }
    phuongSai=(double)1.0*sum2/n;
    cout << phuongSai;
    return 0;
}
