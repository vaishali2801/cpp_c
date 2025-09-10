#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int>&arr,int start,int end){

    int idx = start -1;
    int pivot = arr[end];

    for(int i = start; i< end;i++){

        if(arr[i] <= pivot){

            idx++;
            int temp = arr[i];
            arr[i] = arr[idx];
            arr[idx] = temp;
        } 
    }
    idx++;
    int temp = arr[end];
    arr[end] = arr[idx];
    arr[idx] = temp;
    return idx;
}

void quicksort(vector<int> &arr ,int start,int end){

    if(start<end){

        int pidx = partition(arr , start ,end);

        //left small value
        quicksort(arr,start,pidx-1);

        //right big value
        quicksort(arr,pidx+1 ,end);                     
    }
}    
int main(){
    vector<int> arr = {5,3,9,14,6,11,7};

    quicksort(arr,0,arr.size()-1);

    cout <<" sorted elements is : " ;
    for(int x : arr){
        cout << x << " " ;
    }
    cout << endl;
}