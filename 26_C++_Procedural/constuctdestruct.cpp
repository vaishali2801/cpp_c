#include<iostream>
#include<string>
using namespace std;
class Obj{
    private:
    int size;
    int *arr;

    public:
    Obj(int size){
        arr = new int[size];

        if(arr == NULL){
            cout << "memory allocated failed...!" << endl;
        }else{
            cout << "memory allocated successfully..!" << endl;
        }
    }
    void addelement(int index,int element){
         if(index >= 0 && index < this->size){
            arr[index] = element;
            cout << "arr["<< index<<"]: "<< arr[index]<< endl;
        }else{
            cout << "Error: index is out of bound...!" << endl;
        }
    }
    ~Obj(){
        delete[] arr;
        arr = NULL; 

        if(arr == NULL){
            cout << "memory deallocated successfully...!" << endl;
        }else{
            cout << "memory Deallocation fail..!" << endl;
        }
    }
};
int main(){
    Obj ob1(5);
    ob1.addelement(2,36);

    return 0;
}