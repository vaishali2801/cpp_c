#include<iostream>
#include<string>
using namespace std;

int main(){
    int size;
    int *arr;

    arr = new int[size];

    if(arr == NULL){
        cout << "memory allocated failed...!" << endl;
    }else{
        cout << "memory allocated successfully..!" << endl;
    }

    arr[0] = 7;
    arr[3] = 30;

    cout << arr[3] << " and " << arr[0] << endl;
     
    delete[] arr;
    arr = NULL; 

     if(arr == NULL){
        cout << "memory deallocated successfully...!" << endl;
    }else{
        cout << "memory Deallocation fail..!" << endl;
    }

    return 0;
}