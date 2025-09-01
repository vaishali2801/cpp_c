#include<iostream>
using namespace std;

int main(){

    int Arr[] = {8,15,9,10,4};
    int n = 5;

    for(int i= 1; i<n;i++){
                              // i= 1 i=2 i=3 i=4
        int current = Arr[i]; // current = 15 current = 9 current = 10 current = 4
        int j = i - 1;  // j=0  j=1 j=2 j=3

        while(j>=0 && Arr[j] < current){ // arr[0] = 8  8 > 15 false 
                                         // arr[1] = 15 15 > 9 true
                                         // arr[2] = 9  9 > 10 false
                                         // arr[3] = 10 10 > 4 true
            Arr[j+1] = Arr[j]; // arr[2] = arr[1]  arr[2] = 9
            j--;                     // j = 0
        }
        Arr[j+1] = current; // arr[1] = 15 
                            // arr[2] = 9
                            // arr[3] = 10
    }

    cout << "sorted element :";
    for(int i = 0;i<n;i++){
        cout << Arr[i] << " ";
    }
    cout << endl;

    return 0;
}