#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(8);
    v.push_back(16);
    v.push_back(32);

    cout<<"Searching 16 : "<<binary_search(v.begin(),v.end(),16)<<endl;
    cout<<"Searching 5 : "<<binary_search(v.begin(),v.end(),5)<<endl;
    
    cout<<"Lower Bound (Index)16 : "<<lower_bound(v.begin(),v.end(),16)-v.begin()<<endl;
    cout<<"Upper Bound (Index)16 : "<<upper_bound(v.begin(),v.end(),16)-v.begin()<<endl;

    
    return 0;
}