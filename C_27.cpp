#include <iostream>
using namespace std;
int chia5 (int n)
{
   while(n!=-1){
   if (n>=0 && n%5==0) cout << n/5 << endl;
   else cout << -1<< endl;
   break;
      }
      if (n==-1) cout << "Bye"<< endl;
}
int main()
{
   int n;
   while (n<1000000){
    cin >> n;
    chia5(n);
   }
   return 0;
}
