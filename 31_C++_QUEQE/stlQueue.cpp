#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int>q;

    q.push(20);
    q.push(30);
    q.push(40);
    cout << q.front() << " is the front element in Queue" << endl;
    cout << q.back() << " is last element in Queue" << endl;
    q.pop();
    return 0;
}