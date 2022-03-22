#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
     sort(a,a+n);
     int cnt = 1;
     for(int j=1;j<n;j++){
        if(a[j] == a[j-1]) cnt++;
        else {cout << a[j-1] <<" " << cnt << endl;
        cnt = 1;}
     }
     cout << a[n-1] << " " << cnt << endl;

    return 0;
}
