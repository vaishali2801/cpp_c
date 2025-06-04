#include <iostream>
using namespace std;

int main(){

    int i=1,sum=0,n;
    cout << "Enter number:";
    cin >> n;
     
    while(i <= n){
        sum+=i;
        i++;
    }
    cout << "sum is :"<< sum << endl;

    return 0;
}