#include<iostream>
#include<stack>
//LIFO(last In first Out)
 

using namespace std;
int main(){
    stack<string> s;
    s.push("Tejal");
    s.push("Nivrutti");
    s.push("Dere");
    s.push("Tejal");
    s.push("Swapnil");
    s.push("Pingal");

    cout<<"Before pop Top elemet is : "<<s.top()<<endl;
    s.pop();
    cout<<"After pop Top elemet is : "<<s.top()<<endl;

    cout<<"Size of stack is : "<<s.size()<<endl;
    cout<<"Is Empty : "<<s.empty()<<endl;




    return 0;
}