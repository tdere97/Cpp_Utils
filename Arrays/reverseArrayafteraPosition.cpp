#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr, int pos){
    int start=pos+1,size=arr.size(),end;
    end=size-1;
    cout<<"Size is :"<<size<<endl;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    vector<int> arr={1,2,3,4,5};
    reverseArray(arr,2);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}