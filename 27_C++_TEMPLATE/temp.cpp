#include<iostream>
#include<string>
using namespace std;

template <typename T>

class Vector{
    private:
    int size;
    T *arr;

    public:
    Vector(){
        this->size = 0;
        arr = new T[100];
    }
    Vector(int size,T ele){
        this->size = size;
        arr = new T[100];
          for(int i = 0; i<this->size;i++){
           arr[i] = ele; 
        }
    }

    void push(T ele){
        arr[this->size] = ele;
        this->size++;
    }
    void pop(){
        this->size--;
    }
    void length(){
        cout << this->size << endl;
    }
    void print(){
        for(int i = 0; i<this->size;i++){
            cout << arr[i] << ", ";
        }
        cout << endl;
    };

};
int main(){
   Vector <int>arr;

   arr.push(20);
   arr.push(30);
   arr.push(40);
   arr.push(50);

   arr.print();

   arr.pop();

   arr.print();

   arr.length();

    return 0;
}