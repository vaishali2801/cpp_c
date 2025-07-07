#include<iostream>
#include<string>
using namespace std;

//     ________________
//    | ______________ |
//    ||              ||
//    ||    rec()     ||
//    ||______________||
//    | ______________ |
//    ||              ||
//    ||    rec()     ||
//    ||______________||
//    | ______________ |
//    | ______________ |
//    ||              ||
//    ||    rec()     ||
//    ||______________||
//    | ______________ |
//    ||              ||
//    ||  main(),a,b  ||
//    ||______________||
//    |________________|

void rec(){
    cout << "hello" << endl;
    rec();
}
int main(){
    int a=15,b=23;
    rec();
  // main function execute
  // stack is empty ,all function is out side the stack
    return 0;
}