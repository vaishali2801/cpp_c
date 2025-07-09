#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
  
    vector<int> arr;
    arr = {10,20,30,40,50,60,70};

    vector<char>  ch(5 , 'v');

     vector<int> num{8,4,5,3,5,6};

     vector<double> v1(5, 3.5);
   

    for(int e : arr){
        cout << e << ", ";
    }
    cout << endl;
    for(char e : ch){
        cout << e << ", ";
    }
     cout << endl;
    for(int e : num){
        cout << e << ", ";
    }
     cout << endl;
    for(int e : v1){
        cout << e << ", ";
    }
     cout << endl;

  
    return 0;
}