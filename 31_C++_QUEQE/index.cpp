#include<iostream>
using namespace std;
# define size 5

class Queue{

    int arr[size];
    int rear,front;

    public:
    Queue(){
        front = rear = -1;
    }

    void Enqueue(int value){
        if(rear == (size-1)){
            cout <<" queue is full" << endl;
            return;
        }
        if(front == -1) front = 0;
        arr[++rear] = value;

        cout << value <<" is added in Queue "<< endl;
    }
    void Deque(){
        if(front == -1 || front > rear){
            cout << "queue is empty" << endl;
            return;
        }
        cout << arr[front] << " is removed " << endl;
        front++;
    }
    void peek(){
        cout << arr[front] << "is front element" << endl;
    }
    void display(){
        for(int i= front; i<= rear;i++){
            cout << arr[i] << " "<< endl;
        }
    }

};

int main(){
    Queue q1;

    q1.Enqueue(15);
    q1.Enqueue(25);
    q1.Enqueue(35);
    q1.Enqueue(45);

    q1.Deque();

    q1.peek();

    q1.display();

    return 0;

}
