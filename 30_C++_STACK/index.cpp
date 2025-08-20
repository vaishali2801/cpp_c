#include<iostream>
using namespace std;


class stack{
    public:
    int top;
    int arr[5];
    
    public:
    stack(){
        top =-1;
    }

    void push(int value){
        if(top==4){
            cout << "stack is overflow" << endl;
        }
        else{
            top++;
            arr[top] = value;
            cout << value <<" pushed" << endl;
        }
    }
    void pop(){
        if(top== -1){
            cout << "stack is empty" << endl;
        }
        else{
            cout << arr[top] << " removed" << endl;
            top--;
        }
    }
    void peek(){
        if(top== -1){
            cout << "stack is empty" << endl;
        }
        else{
            cout << arr[top]<< " top stack" << endl;
        }
    }
    void size(){
        if(top == -1 ){
            cout << "empty stack" << endl;
        }
        else{
            cout <<"size :" <<  top +1 << endl;
        }
    }
};

int main(){

    stack s1;
    s1.push(50);
    s1.push(30);
    s1.push(60);
    s1.push(70);
    s1.size();
    s1.pop();

    s1.size();

    s1.peek();
  
    return 0;
}