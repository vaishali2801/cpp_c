#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        int smallest = i;
         
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[smallest]){
                smallest = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;

    }

    cout << "sorting array is :";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;

    }
    cout << endl;
}

int main(){
    int size;
    cout << "Enter array's size :";
    cin >> size;

    int arr[size];

    for(int i=0 ; i<size ; i++){
        cout << "arr[" << i << "] :" ;
        cin >> arr[i];
    }

    selectionsort(arr,size);
}