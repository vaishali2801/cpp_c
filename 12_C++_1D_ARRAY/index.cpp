#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter size:";
    cin >> size;

   int array[size];
   for(int i=0;i<size;i++){
    cout << "array[" << i <<"]: ";
    cin >> array[i];
   }

   for(int i=0;i<size;i++){
    cout << array[i] << ", ";
   }

    return 0;
}