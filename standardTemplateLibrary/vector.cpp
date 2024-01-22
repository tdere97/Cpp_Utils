#include<iostream>
//library for stl vector
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    vector<int> a(5,1);
    //(5 is size , initalize it 1 all elements , by default it initalizes with 0)
    cout<<"Printin a : ";
    for(int i:a){
        cout<<i<<"\t";
    }
    cout<<endl;

    //copy a to new vector 
    vector<int> new1(a);
    cout<<"Printin new : ";
    for(int i:new1){
        cout<<i<<"\t";
    }
    cout<<endl;

    cout<<"Size is : "<< v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size is : "<< v.capacity()<<endl;
    v.push_back(2);
    cout<<"Size is : "<< v.capacity()<<endl;
    //double the size 1-> 2-> 4->8
    v.push_back(3);
    cout<<"Size is : "<< v.capacity()<<endl;

    cout<< "Element at 2nd Index : "<< v.at(2)<<endl;
    cout <<"Front : "<< v.front()<<endl;
    cout<<"Back : "<< v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<"\t";
    }
    cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<"\t";
    }
    cout<<endl;
    //empty the vector(size beacomes zero i.e elements are removed but capacity remains whatever last capacity it have)
    cout<<"before clear Capacity : "<< v.capacity()<<"\n"<<" Size : "<<v.size()<<endl;
    v.clear();
    cout<<"after clear Capacity : "<< v.capacity()<<"\n"<<" Size : "<<v.size()<<endl;

    return 0;
}