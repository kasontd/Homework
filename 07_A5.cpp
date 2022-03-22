#include <iostream>
using namespace std;
char* weird_string() {
   char c[] = “123345”;
   return c;
}
int main()
{
      weird_string();
    cout << weird_string();
}
//error: stray '\223' in program
//error: stray '\224' in program|
//error: initializer fails to determine size of 'c'|
//error: array must be initialized with a brace-enclosed initializer|
