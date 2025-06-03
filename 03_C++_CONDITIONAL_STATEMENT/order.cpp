#include<iostream>
using namespace std;

int main(){
    
    int num;
    cout << "----------menu----------" << endl; 
    cout << "Press 1 for ice cream...!"<< endl;
    cout << "Press 2 for dabeli...!"   << endl;
    cout << "Press 3 for samosa...!"   << endl;
    cout << "Press 4 for puff...!"     << endl;
    cout << "Press 5 for pastry...!"   << endl;
    cout << "Press 6 for cake...!"     << endl;

    cout << "Enter number :";
    cin >> num;

    if(num==1){
        cout << "Your order is ice cream" << endl;
    }
    else if(num==2){
        cout << "Your order is dabeli"    << endl;
    }
    else if(num==3){
        cout << "Your order is samosa" << endl;
    }
    else if(num==4){
        cout << "Your order is puff"   << endl;
    }
    else if(num==5){
        cout << "Your order is pastry" << endl;
    }
    else if(num==6){
        cout << "Your order is cake"   << endl;
    }
    else{
        cout << "This is not in menu "     << endl;
    }

    return 0;
}