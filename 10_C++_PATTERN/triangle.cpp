#include<iostream>
using namespace std;

int main(){

    int i,j,r,c;

    cout << "Enter row:";
    cin >> r;

    cout << "Enter column:";
    cin >> c;

    for(i=1;i<=r;i++){
        for(j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "---------------------------" << endl;
    
    for(i=1;i<=r;i++){
        for(j=1;j<=i;j++){
            cout << i << " ";
        }
        cout << endl;
    }
    cout << "---------------------------" << endl;

    for(i='A';i<='D';i++){
        for(j='A';j<=i;j++){
            cout << (char)j << " ";
        }
        cout << endl;
    }

    return 0;
}