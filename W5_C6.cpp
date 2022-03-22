#include <iostream>
using namespace std;
int Ucln(int a, int b)
{
   if (a == 0 || b == 0){
        return a + b;
    }
    while (a*b!=0){
        if (a > b){
            a %= b;
        }else{
            b %= a;
        }
    }
    return a + b;
}
int main()
{
    int a,b;
    cin >> a >> b;
    int result = Ucln(a,b);
    cout << result;
    return 0;
}
