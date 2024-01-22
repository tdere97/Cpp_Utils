#include<iostream>
#include<queue>
//priority queue 1st element always be largest or greatest
//priority queue is similar to heap
//by default its max heap (first element largest)
//we can make it as min heap as well (first element smallest)
 
using namespace std;
int main(){
    //max heap
    priority_queue<int> maxi;
    //min heap
    priority_queue<int, vector<int>,greater<int>> mini;
    int size;

    maxi.push(1);   
    maxi.push(4);
    maxi.push(6);
    maxi.push(2);
    maxi.push(9);
    size=maxi.size();
    cout<<"Printing maxi :"<<"\t";
    for(int i=0; i<size;i++){
        cout<<maxi.top()<<"\t";
        maxi.pop();
    }
    cout<<endl;

    mini.push(1);   
    mini.push(4);
    mini.push(6);
    mini.push(2);
    mini.push(9);
    size=mini.size();
    cout<<"Printing mini :"<<"\t";
    for(int i=0; i<size;i++){
        cout<<mini.top()<<"\t";
        mini.pop();
    }
    cout<<endl;

    cout<<"Maxi Is Empty : "<<maxi.empty()<<endl;
    cout<<"Mini Is Empty : "<<mini.empty()<<endl;

    return 0;
}