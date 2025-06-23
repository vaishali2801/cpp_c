#include<iostream>
using namespace std;

void ref(int &x){
     x= x+10;

}
void val(int y){
     y= y+10;   

}

int main(){

    int x = 15;
    int y = 20;
 // pass by value 
 
   val(y);

   cout << " your y is :" << y << endl;

cout << "============================" << endl;

// pass by reference
    ref(x);

    cout <<"your x is :" << x << endl;


    return 0;
}