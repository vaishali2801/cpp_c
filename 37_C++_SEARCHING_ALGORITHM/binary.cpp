#include<iostream>
#include<vector>
using namespace std;

int binarysearch(const vector<int>&arr,int start,int end,int svalue){
    if(start<end){
        int mid = start + (end - start)/2;

        if(arr[mid] == svalue){
            return mid;
        }else if(arr[mid] < svalue){
            return binarysearch(arr,mid+1,end,svalue);
        }else{
            return binarysearch(arr,start,mid-1,svalue);
        }
        return -1;
    }
}
int main(){
    const vector<int> arr = {7,9,13,17,20,25};
    int svalue = 25;

    int idx = binarysearch(arr,0,arr.size()-1,svalue);

    if(idx == -1){
        cout << "Not found" << endl;
    }else{
        cout << svalue << " Match at index position " << idx << endl;
    }

    return 0;
}