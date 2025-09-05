#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int start,int mid,int end){
    vector<int> temp;
    int i=start;
    int j= mid+1;

    while(i<=mid && j<=end){
        if(arr[i] > arr[j]){
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
    for(int k=0;k<temp.size();k++){
        arr[start+k] = temp[k];
    }
}

void merge_sort(vector<int>&arr,int start,int end){
    if(start<end){

        int mid = start + (end-start)/2;
        merge_sort(arr,start,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
int main(){
    vector<int> arr = {67,4,77,24,54,8,1};
     merge_sort(arr,0,arr.size()-1);

     for(int e:arr){
        cout<< e << " ";
     }
     cout << endl;

    return 0;
}