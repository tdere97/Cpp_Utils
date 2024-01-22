#include<iostream>
#include<set>
// stores unique element if you push any number 'n' times, then also it takes only one occurence
// Background implemetation of set is with BST
// you cant modify the element once inserted , you need to delete can't modify
// elements will be returned in sorted order
// unordered set is a type of set where elements are fetched at random order not sorted order
// set is little slow as compare to unordered set


using namespace std;
int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(0);
    s.insert(3);
    s.insert(1);
    s.insert(2);    
    s.insert(0);
    s.insert(6);
    s.insert(7);


    cout<<"Printing set :"<<"\t";
    for(int i:s){
        cout<<i<<"\t";
    }
    cout<<endl;

    s.erase(s.begin());
    cout<<"After Erase set :"<<"\t";
    for(int i:s){
        cout<<i<<"\t";
    }
    cout<<endl;


    set<int>:: iterator it=s.begin();
    it++;
    s.erase(it);
    cout<<"After Erase at 1st location set :"<<"\t";
    for(int i:s){
        cout<<i<<"\t";
    }
    cout<<endl;

    cout<<"Count of 5 : "<<s.count(5)<<endl;
    cout<<"Count of -5 : "<<s.count(-5)<<endl;

    set<int>:: iterator itr=s.find(5);
    cout<<"Find iterator : "<<*itr<<endl;

    cout<<"Printing set :"<<"\t";
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<"\t";
    }
    cout<<endl;
    return 0;
}