#include<iostream>
#include<stack>
using namespace std;

class Queueusingstack{
    stack<int> s1,s2;

    public:
    void Enqueue(int value){
        s1.push(value);
        cout << value <<" is added in queue" << endl;
    }
    void dequeue(){

        if(s1.empty()&&s2.empty()){
            cout << "queue is empty" << endl;
            return;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout << s2.top() << " is removed from queue" << endl;
        s2.pop();

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    void peek(){
         if(s1.empty()&&s2.empty()){
            cout << "queue is empty" << endl;
            return;
        }
        if(s2.empty()){
             while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout << s2.top() << " is top element in queue" << endl;
        
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
};

int main(){

    Queueusingstack q;

    q.dequeue();

    q.Enqueue(23);
    q.Enqueue(33);
    q.Enqueue(43);
    q.peek();
    q.dequeue();
    q.peek();
}

