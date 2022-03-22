#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char count =0;
    cin >> a >> b;
    char M[a][b];
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
    {
        cin >> M[i][j];
    }
     for(int x=0 ;x<a;x++){
        for(int y=0;y<b;y++)
     {
         if(M[x][y]=='.'){
            if(M[x-1][y-1]=='*'|| M[x-1][y]=='*'|| M[x][y-1]=='*'||M[x+1][y+1]=='*'|| M[x+1][y]=='*'|| M[x][y+1]=='*'){
                count ++;
                M[x][y]= count + '0';
            }
            else M[x][y]= 0 +'0' ;
         }
         cout << M[x][y] << " " ;
     }
     cout << endl;
     }

}
