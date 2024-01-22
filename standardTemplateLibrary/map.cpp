#include<iostream>
#include<map>
// in map data is stored in key value format
// keys should be unique, one key should point to one value
// its is possible that values are not unique
// keys are again in sorted form 
//background implementation is with balanced tree
// operation time complexity is O(logn)
using namespace std;
int main(){
    map<int, string> m;

    m[1]="Tejal";
    m[2]="Nivrutti";
    m[5]="Dere";
    m[7]="Tejal";
    m[10]="Swapnil";
    m[3]="Pingal";

    cout<<"Printing m :"<<"\n";
    for(auto i:m){
        cout<<i.first<< " : "<<i.second<<"\n";
    }
    cout<<endl;
    //another way to insert the element 
    m.insert({8, "Hello"});

    cout<<"Printing m :"<<"\n";
    for(auto i:m){
        cout<<i.first<< " : " << i.second <<"\n";
    }
    cout<<endl;

    //to check if 10 is present in map
    cout<<"finding 10 : "<<m.count(10)<<endl;
    cout<<"finding -10 : "<<m.count(-10)<<endl;

    cout<<"Before Erase m :"<<"\n";
    for(auto i:m){
        cout<<i.first<< " : " << i.second <<"\n";
    }
    cout<<endl;   


    m.erase(10);

    cout<<"After Erase m :"<<"\n";
    for(auto i:m){
        cout<<i.first<< " : " << i.second <<"\n";
    }
    cout<<endl;

    auto it= m.find(5);
    //find number after that 
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<"\t";
    }
    cout<<endl;


    return 0;
}