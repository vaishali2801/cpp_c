#include<iostream>
#include<vector>

using namespace std;

// void reverse(vector<int> arr, vector<int> newrev){
//     for(int i= arr.size()-1;i >= 0;i--){
//         newrev.push_back(arr[i]);
//     }
//     for(int e :newrev){
//         cout << e << ", ";
//     }
//     cout << endl;
// }

int main(){

    vector<int> arr = {1,3,4,6,8};
    vector<int> newrev;
    // reverse(arr , newrev);


    int i= 0;
    int j= arr.size()-1;

    while(i<j){
        int temp= arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
    for(int e :arr){
        cout << e << ", ";
    }
    cout << endl;

    return 0;
}