#include<iostream>

using namespace std;
// TAKE SOMETHING RETURN SOMTHING
int fact(int num){
    if(num==1){
        return 1;
    }
    return num*fact(num-1);
}

int main(){

    int num;
    cout << "enter num :";
    cin >> num;
    cout << "factorial is" << fact(num);
    
    return 0;
}