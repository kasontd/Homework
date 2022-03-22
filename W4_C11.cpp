#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
void change10_2(int n)
{
    int i=0, N = 10000, bin[n];
    while(n>0){
        bin[i]=n%2;
        n/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout << bin[j];
    }
}
int change2_10(string n)
{
    int decimal=0,i=0,m=n.size();
    for(i=0;i<n.size();i++){
        decimal += (pow(2,m)* n[i]);
        m--;
    }
    return decimal;
}
int main()
{
    int n;
   cin >> n;
    change10_2(n);
string num;
cin >> num;
int result = change2_10(num);
cout << result << endl;
}
