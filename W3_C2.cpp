#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N= 100;
    bool check = true;
    string s ;
    cin >> s;
    int i=0, j= s.length()-1;
    while(i<j){
        if(s[i]!=s[j])
            check = false   ;
             i++;
        j--;
    }
    if(check==true) cout << "yes";
    else cout << "no";


}
