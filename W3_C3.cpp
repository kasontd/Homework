#include <iostream>
#include <string>
using namespace std;
int countDoiguong(int num)
{
    int temp=num,sum=0,r;
     for(temp=num;num!=0;num=num/10){
         r=num%10;
         sum=sum*10+r;
    }
     if(temp==sum) return 1;
     else return 0;

}
int main()
{
    int T,count=0;
    cin >> T;
    int a[T],b[T];

    for(int i=0;i<T;i++){
        cin >> a[i] >> b[i];
    }
        for(int u=0;u<T;u++){
        for(int j=a[u];j<=b[u];j++){
           if(countDoiguong(j)==1){count++;}
        }
        cout << count << endl;
        }




}
