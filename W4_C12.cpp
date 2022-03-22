#include <iostream>
using namespace std;
int toHop(int k, int n)
{
  if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return toHop(k - 1, n - 1) + toHop(k, n - 1);
}
int kiemTra(int k, int n)
{
    if(k>=0 && k<=n && n>=1 && n<=20) return 1;
    else return 0;
}
void nhapKN(int k[], int n[], int soPhanTu)
{
    for(int i=0;i<soPhanTu;i++){
        cin >> k[i];
    }
    for(int j=0;j<soPhanTu;j++){
        cin  >> n[j];
    }
}
int main()
{
    int num;
    cin >> num;
    int k[num], n[num];
    nhapKN(k,n,num);
    int i=0,j=0;
    while(i<num && j<num){
            if(k[i]==-1 && n[j]==-1) break;
        cout << toHop(k[i], n[j]) << endl;
        i++;
        j++;
    }
}
