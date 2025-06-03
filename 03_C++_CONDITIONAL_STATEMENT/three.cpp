#include<iostream>
using namespace std;

int main(){
     
    int a,b,c;

    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;

    if(a > b){
        if(a > c){
            cout << "a is greater" << endl;  
        }
        else{
            cout << "c is greater" << endl;
        }
    }
    else if(b > a){
        if(b > c){
            cout << "b is greater" << endl;
        }
        else{
            cout << "c is greater" << endl;
        }
    }
    else{
        cout << "Enter valid number" << endl;
    }


    return 0;
}