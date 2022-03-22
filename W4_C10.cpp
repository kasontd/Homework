#include <iostream>
#include <math.h>
using namespace std;
void Triple(int arr[],int n)
{
    int a,b,c;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=i+2;k<n;k++){
                a = arr[i];
                b = arr[j];
                c = arr[k];
                if((a+b+c)%25==0) cout << a <<" " << b << " " << c << endl;
            }
        }
    }
}

int Random(int min, int max)
{
    return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int min = 0, max = 49;
    for(int i=0;i<n;i++){
        a[i]=Random(min,max);
    }
    Triple(a,n);

   return 0;
}
