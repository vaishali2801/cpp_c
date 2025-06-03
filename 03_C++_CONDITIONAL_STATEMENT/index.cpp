#include<iostream>
using namespace std;

int main(){
     
    int n1,n2;

    cout << "Enter n1:";
    cin >> n1;

    cout << "Enter n2:";
    cin >> n2;

    if(n1>n2){
        cout << "n1 is greater"<< endl;
    }
    else if(n2>n1){
        cout << "n2 is greater"<< endl;
    }
    else if(n2==n1){
        cout << "n1&n2 are equal"<< endl;
    }
    else{
        cout << "Enter valid number"<< endl;
    }
    
    return 0;
}