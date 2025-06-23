#include<iostream>
using namespace std;

void a(int arr[],int &size){
 
    for(int i=0;i<size;i++){

        cout << arr[i] << endl;
    }

}

int main(){
    int size=5;
    
    int arr[size] = {1, 2, 3, 4, 5};

    a(arr,size);

    return 0;
}