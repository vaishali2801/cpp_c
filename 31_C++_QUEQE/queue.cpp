#include<iostream>
using namespace std;
#define size 6

class queue{

    int Q[size];
    int front,rear;

    public:
    queue(){
        front = rear = -1;
    }
    void Enque(int value){
        if(rear == (size-1)){
            cout << "queue is full" << endl;
            return;
        }
        if(front == -1) front = 0;
        Q[++rear] = value;

        cout << value << " added in queue" << endl;
    }
    void Deque(){
        if(front == -1){
            cout << "queue is empty" << endl;
            return;
        }
        cout << Q[front] << " is removed from queue" << endl;
        front++;
    }
    void display(){

        for(int i = front; i<= rear;i++){
            cout << Q[i] << " " << endl;
        }
    }


};

int main(){

    queue q1;
    q1.Enque(13);
    q1.Enque(15);
    q1.Enque(18);
    q1.Enque(68);
    q1.Enque(78);
    q1.Enque(20);
    q1.Enque(40);

    q1.Deque();
    q1.display();

    return 0;
}