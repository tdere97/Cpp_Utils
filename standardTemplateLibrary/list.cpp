#include<iostream>
#include<list>
//list is basically doubly linked list
// no direct access need to travel n get the element
using namespace std;
int main(){
    list<int> l;
    //copy the list
    list<int> n(l);

    list<int> m(5,100);
    cout <<"Printing m : ";
    for(int i:m){
        cout<<i<<"\t";
    }cout<<endl;


    l.push_back(3);
    l.push_front(2);
    l.push_back(4);
    l.push_front(1);

    for(int i:l){
        cout<<i<<"\t";
    }cout<<endl;

    l.erase(l.begin());
    cout <<"After Erase : ";
    for(int i:l){
        cout<<i<<"\t";
    }cout<<endl;

    l.pop_back();
    l.pop_front();
   
    cout <<"After Pop : ";
    for(int i:l){
        cout<<i<<"\t";
    }cout<<endl;

    cout<<"Size of List : "<<l.size()<<endl;




    return 0;
}