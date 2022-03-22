#include <iostream>
#include <string.h>
using namespace std;
int strcmp ( const char * str1, const char * str2 );
int main()
{
    int count = 0;
    char* str1 = "123";
    char* str2 = "123123123";
    while(strcmp(str1, str2)!=0){
    if(strcmp(str1,str2)) count ++;
    }
    cout << count ;
}
