#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int value){
        data = value;
        next = nullptr;
    }

};
class linkedlistQueue{
    Node* front;
    Node* rear;

    public:
    linkedlistQueue(){
        front = rear = nullptr;
    }
    void Enqueue(int value){
        Node* n1 = new Node(value);

        if(rear == nullptr){
            front = rear= n1;
        }else{
            rear->next = n1;
            rear = n1;
        }
        cout << value << " added in Queue" << endl;

    }
    void dequeue(){
        if(front == nullptr){
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        cout << temp->data << " is removed from Queue" << endl;
        front = front->next;
        delete temp;
    }
    void peek(){
         if(front == nullptr){
            cout << "Queue is empty" << endl;
            return;
        }
        cout << front->data << " is the top element in Queue" << endl;
    }
    void display(){
        if(front == nullptr){
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        cout << "elements are in queue "<< endl;
        while(temp!= nullptr){
            cout << temp->data << " ";
            temp= temp->next;
        }
        cout<< endl;

        
    }
};
int main(){
    linkedlistQueue q;
    q.dequeue();
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    q.Enqueue(50);
    q.Enqueue(60);
    q.Enqueue(70);
    q.Enqueue(80);
    q.Enqueue(90);
    q.Enqueue(100);
    q.dequeue();
    q.peek();
    q.display();
}