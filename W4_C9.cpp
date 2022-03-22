#include <iostream>
#include <stdlib.h>
using namespace std;
int randnum(int n)
{
    int r = rand();
    if (r < n) return r;
    else return -1;
}
int main()
{
    int n;
    cin >> n;
    int result = randnum(n);
    cout << result;
    return 0;
}
