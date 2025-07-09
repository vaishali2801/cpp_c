#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
  
    vector<int> arr;
    arr = {10,20,30,40,50,60,70};

    arr.push_back(10); // add
    arr.push_back(11);  // add
    arr.push_back(12); // add
 
    arr.pop_back(); // clear

    cout << "Empty :"<< arr.empty() << endl;
    cout << "at    :"<< arr.at(2) << endl;
    cout << "front :"<< arr.front() << endl;
    cout << "back  :"<< arr.back() << endl;
    cout << "size :"<< arr.size() << endl;

    arr.erase(arr.begin() + 1,arr.begin() + 5);
    
   

    for(int e : arr){
        cout << e << ", ";
    }
    cout << endl;
   

  
    return 0;
}