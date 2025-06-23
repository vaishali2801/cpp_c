#include<iostream>

using namespace std;
// TAKE NOTHING RETURN NOTHING
void sumarr(){
    int arr[5] = {1,4,5,6,7};

    int sum = 0 ;

    for(int i=0;i<5;i++){
        sum+=arr[i];

    }
    cout << "sum :" << sum << endl;
}

int main(){

    sumarr();

    return 0;
}