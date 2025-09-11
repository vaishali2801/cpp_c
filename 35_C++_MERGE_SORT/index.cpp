#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int start,int mid,int end){

    vector<int> temp;
    int i = start,j= mid+1;

    while(i <=mid && j<=end){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k= 0; k<temp.size();k++){
        arr[start + k ] = temp[k];
    }
}
void mergesort(vector<int> &arr,int start,int end){
    if(start<end){
        int mid = start + (end-start)/2;
        // left half
        mergesort(arr,start,mid);

        //right half
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
int main(){
    vector<int> arr = {83,77,39,7,20,4,1};
    mergesort(arr,0,arr.size()-1);

    cout << "sorted vector array elements are :";
    for(int i= 0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}