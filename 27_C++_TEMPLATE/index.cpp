#include<iostream>
#include<string>
using namespace std;

template <typename T>
T mul(T a,T b){
    return a * b;
}

int main(){

    cout << mul(25,25) << endl;
    cout << mul(5,10) << endl;
    cout << mul(6,40) << endl;

    cout << mul<int>(20,15) << endl;
    cout << mul<float>(12.8,34.7) << endl;
   



    return 0;
}