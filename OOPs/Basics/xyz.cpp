#include<iostream>
using namespace std;

int main(){
    string s="a";
    string s1="a";
    string* s2=new string("a");

    cout<<"s: "<<&s<<endl;
    cout<<"s1: "<<&s1<<endl;
    cout<<"s2: "<<s2<<endl;
 

    return 0;
}