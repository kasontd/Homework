#include <iostream>
using namespace std;
int* weird_sum(int a, int b) {

int c;

c = a + b;

return &c;

}
int main(int argc, const char * argv[])
{
    int a=1, b=5;
    cout << weird_sum(a,b) << endl;
    int *pX=NULL;
    cout << pX << endl;
    cout << *pX << endl;
    *pX = 0;
    return 0;
//Loi1: 0x10
//Loi2: 0
//Loi3: 0
}
