#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }

};

class Stack{

    private:
    Node* top;
    int count;

    public:
    Stack(){
        top = nullptr;
        count = 0;
    }

    void push(int val){
        Node* n1 = new Node(val);
        n1->next = top;
        top = n1;
        count++;

        cout << "node is added in stack " << val << endl;

    }

    void pop(){
        if(top == nullptr){
            cout << "stack is empty " << endl;

        }
        else{
            cout << top->data << "is deleted from stack " << endl;
            Node* temp = top;
            top = temp->next;
            delete temp;
            count--;
        }
    }
    void size(){
        cout << "element is : " << count << endl;
    }
    void peek(){
        if(top == nullptr){
            cout << " stack is empty" << endl;
        }
        else{
            cout << "The top element is " << top->data << endl;
         }
    }
};

int main(){

    Stack s1;

    s1.push(50);
    s1.push(100);
    s1.push(150);
    s1.push(200);

    s1.size();

    s1.pop();
    s1.size();

    s1.peek();

    return 0;
}