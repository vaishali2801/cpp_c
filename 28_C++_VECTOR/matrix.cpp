#include<iostream>
#include<vector>

using namespace std;

int main(){

   vector<vector<int> >array;
   int size;
   cout << "Enter size : ";
   cin >> size;

    for(int i=0;i<size;i++){
        vector<int> temp;
        for(int j=0;j<size;j++){
            int v;
            cout << j+1 << " :";
            cin >> v;
            temp.push_back(v);
        }
        array.push_back(temp);
    }

    for(vector<int> ele:array){
        for(int e:ele){
            cout << e << ", ";
        }
        cout << endl;
    }

    return 0;
}