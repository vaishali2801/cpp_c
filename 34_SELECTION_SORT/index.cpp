#include<iostream>
using namespace std;

int main(){
    int arr[] = {4,8,3,9,7};
    int n = 5;

    for(int i = 0;i<n-1;i++){ // i=0 i=1 i=2
        int small = i; //small = 0 small= 1 small=2

        for(int j= i+1;j<n;j++){  // j= 1 
            if(arr[j] < arr[small]){  // arr[1]=8 arr[0]=4 : arr[2]=3 arr[1]=8:arr[3]=9 arr[1]=8:arr[4]=7 arr[1]=8
                                      // 8<4 false : 3<8 true :9<8 false : 7<8 true
                small = j; // small= 2 :small = 4

            }
        }
        int temp = arr[i]; //temp=4 ,arr[0] = 3 arr[2]=4
        arr[i] = arr[small]; 
        arr[small] = temp; 
    }

    cout << "sorted element are :";
    for(int i= 0;i<n;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}