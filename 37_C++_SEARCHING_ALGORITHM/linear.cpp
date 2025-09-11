#include<iostream>
#include<vector>
using namespace std;

int linearSearch(const vector<int>&arr,int sValue ){

    for(int i=0;i<arr.size();i++){

        if(arr[i]==sValue){
            return i;
        }
    }
    return -1;
}
int main(){
    const vector<int>arr={7,2,8,10,3,2,1};

    int sValue = 1;

    int idx = linearSearch(arr,sValue);

    if(idx==-1){
         cout << "no founded"; 
    }else {
        cout << sValue  << " is located at index position " << idx << endl;
    }
    return 0;
}