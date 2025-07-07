#include<iostream>
#include<string>
using namespace std;

int main(){

    int x= 10;

    int *a = new int;
    *a = 7;
    // or
    int *b = new int(8);

   
    cout << *a << endl;
    cout << *b << endl;

     delete a;
     a = new int[5];
    cout << a << endl;


    

   return 0;
}