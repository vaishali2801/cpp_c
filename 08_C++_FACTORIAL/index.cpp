#include<iostream>
using namespace std;

int main(){

    int fact=1,n;
   // int i=1,n,fact=1;
     cout << "Enter number:";
     cin >> n;

    while(n>=1){
        fact *= n;
        n--;
    }
    cout << "factorial :" << fact << endl;

    // while(i<=n){
    //     fact *=i;
    //     i++;
    // }
    // cout << "factorial of "<< n << ":"<< fact << endl;
    return 0;
}