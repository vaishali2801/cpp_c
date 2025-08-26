#include<iostream>
#include<vector>
using namespace std;

class QueueVector{
    vector<int> Q;

    public:
    void Enque(int value){
        Q.push_back(value);
        cout << value << " is added in queue" << endl;

    }
    void Deque(){
        if(Q.empty()){
            cout << "Queue is empty" << endl;
            return;
        }
        cout << Q.front() << " is remove from Queue" << endl;

        Q.erase(Q.begin());
    }
    void peek(){
         if(Q.empty()){
            cout << "Queue is empty" << endl;
            return;
        }
        cout << Q.front() << " is front element in queue" << endl;
    }
    void display(){
         if(Q.empty()){
            cout << "Queue is empty" << endl;
            return;
        }
        for(int i : Q){
            cout << i << " " << endl;
        }
    }
};

int main(){
    QueueVector q1;
    q1.Deque();
    q1.Enque(35);
    q1.Enque(55);
    q1.Enque(45);
    q1.peek();
   q1.Deque();
    q1.display();
}

