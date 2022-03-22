
#include <iostream>
using namespace std;
//int main()
//{
////    int temp;
////    cout << &temp << endl;//0x61fdb4
//    int n;
//    cin >> n;
//    int a[n];
//    char b[n];
//    int temp;
//    cout << &temp << endl;//0x61fdb0
//    for(int i=0;i<3;i++){
//        cout << (void*)&a[i]<< endl;
//    }
//    for(int j=0;j<3;j++){
//        cout << (void*)&b[j] << endl;
//    }
//
//}
//0x61fd80
//0x61fd84
//0x61fd88
//0x61fd70
//0x61fd71
//0x61fd72
//long factorial(long x)
//{
//      if(x>1) return (x*factorial(x-1));
//      else return 1;
//}
//int main()
//{
//    long number = 5;
//    long x = factorial(number);
//    cout << "x= " << x << " at " << &x << endl;
//}
//120 0x61fe18
int search1(int key, int a[], int low, int high) {
   if (low > high) return -1;
   int mid = (low + high) / 2;
   if (a[mid] == key) return mid;
   if (a[mid] > key)
      return search1(key, a, low, mid-1);
   return search1(key, a, mid+1, high);
}
int search2(int arr[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
    if (arr[i] == x)
      return i;
  return -1;
}

int main() {
  int arr[] = {2, 3, 4, 10, 40};
  int low=arr[0];
  int high=arr[4];
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 10;
  int result1 = search1(x,arr,2,40);
  int result2 = search2(arr, n, x);
  cout << result1 << " " << result2;

  return 0;
}
