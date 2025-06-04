#include<iostream>
using namespace std;

int main(){

    int i=0,num;

    cout << "Enter number:";
    cin >> num;

    do{
        cout << i << endl;
        i++;
    }while(i<=num);

    return 0;
}