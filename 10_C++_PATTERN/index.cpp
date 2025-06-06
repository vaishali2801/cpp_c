#include<iostream>
using namespace std;

int main(){

    int i,j,r,c;

    cout << "Enter row:";
    cin >> r;

    cout << "Enter column:";
    cin >> c;

    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cout << "*" << " " ;
        }
        cout << endl;
    }
    cout << "============================"<< endl;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cout << i << " " ;
        }
        cout << endl;
    }
    cout << "============================"<< endl;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cout << j << " " ;
        }
        cout << endl;
    }

    return 0;
}