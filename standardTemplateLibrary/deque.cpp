#include<iostream>
//library for stl deque(doubly ended queue)
//can perform push and pop at both the ends i.e insertion and deletion from both the end 
//its not available in contiguos memory location but it is traced where which array had been placed it keeps a eye on it 
//dynamic 
#include<deque>
using namespace std;
int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(5);
    d.push_back(2);
    d.push_front(4);

    cout<<"Print before pop d : "<<"\t";
    for (int i:d){
        cout<<i<<"\t";
    }
    cout<<endl;

    d.pop_back();
    d.pop_front();

    cout<<"Print after pop d : "<<"\t";
    for (int i:d){
        cout<<i<<"\t";
    }
    cout<<endl;

    cout<<"Element at 0th Index : "<<d.at(0)<<endl;
    cout<<"Front is : "<<d.front()<<endl;
    cout<<"Back is : "<<d.back()<<endl;

    cout<<"Is Empty : "<<d.empty()<<endl;

    cout<<"Before Erase : "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1); //will delete 0th element
    cout<<"After Erase : "<<d.size()<<endl;
    cout<<"Print after d : "<<"\t";
    for (int i:d){
        cout<<i<<"\t";
    }
    cout<<endl;

    return 0;
}
