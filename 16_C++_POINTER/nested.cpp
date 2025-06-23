#include<iostream>

using namespace std;


void third(){

    cout << "this is third" << endl;
}
void second(){

    cout << "this is second" << endl;
    third();
}
void first(){

    cout << "this is first" << endl;
    second();
}
int main(){

    first();

    return 0;
}