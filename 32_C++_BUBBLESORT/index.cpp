#include<iostream>
using namespace std;

int main(){
    int Arr[] = {9,3,6,7,5,1};
    int n = 6;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(Arr[j] > Arr[j+1]){
                // swap(Arr[j], Arr[j+1]);
                int temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
    }
    cout << "sorted element is " ;
    for(int i= 0;i<n;i++){
        cout << Arr[i] <<" " ;
    }
    cout << endl;

}