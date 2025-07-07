#include<iostream>
#include<string>
using namespace std;

//     ________________
//    | ______________ |
//    ||              ||
//    ||  sub(),x,y   ||
//    ||______________||
//    | ______________ |
//    ||              ||
//    ||  sum(),x,y   ||
//    ||______________||
//    | ______________ |
//    ||              ||
//    ||  main(),a,b  ||
//    ||______________||
//    |________________|

void sub(int x,int y){
    cout << x-y << endl; // after execute go function sum
}
void sum(int x,int y){
    cout << x+y << endl;
    sub(x,y);  // function sub execute 
}   // aftre execute complete go main function
int main(){
    int a=15,b=23;

    sum(a,b);// function sum execute
    
  // main function execute
  // stack is empty ,all function is out side the stack
    return 0;
}