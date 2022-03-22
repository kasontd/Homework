#include <iostream>
#include <cmath>
using namespace std;
int check(int n)
{
    int count =0;
    for(int i=2;i<=sqrt(n);i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0) return 1;
    else return 0;
}
int main()
{
    int n;
    cin >> n;
    int result=check(n);
    if(n>=2) cout << result << endl;
    for(int i=0;i<n;i++){
        if(check(i)==1) cout << i << endl;
    }
    return 0;
}
