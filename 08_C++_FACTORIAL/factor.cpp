#include<iostream>
using namespace std;

int main(){

    int num,i=1;
    cout << "Enter number:";
    cin >> num;

    while(i<=10){
        cout << num << "X" << i << "=" << num*i << endl;
        i++;
    }

    return 0;
}