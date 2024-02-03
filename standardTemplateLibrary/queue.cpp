#include<iostream>
#include<queue>
//FIFO(first In first Out)
 

using namespace std;
int main(){
    queue<string> q;
    q.push("Tejal");
    q.push("Nivrutti");
    q.push("Dere");
    q.push("Tejal");
    q.push("Swapnil");
    q.push("Pingal");

    cout<<"Before pop Top elemet is : "<<q.front()<<endl;
    q.pop();
    cout<<"After pop Top elemet is : "<<q.front()<<endl;

    cout<<"Size of queue is : "<<q.size()<<endl;
    cout<<"Is Empty : "<<q.empty()<<endl;



    return 0;    
}