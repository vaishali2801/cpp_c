#include<iostream>
using namespace std;

int main(){

   int a[7] = {3,7,8,4,1,9,4};

   for(int A  : a){
     cout << A << " ,";
   }
cout << endl;
 // sizeof operator

 int key = 20;

 cout << sizeof(key) << endl;

 int size = sizeof(a)/sizeof(a[0]);

 cout << size << endl;
 cout << sizeof(a) << endl;
    return 0;
}