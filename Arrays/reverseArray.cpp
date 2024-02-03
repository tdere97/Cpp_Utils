#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int> &arr, int m){
    vector<int> temp(arr);
    for(int i=0,j=m-1;i<m;i++,j--){
        arr[i]=temp[j];
    }
}
void reverseArray_2ndApproach(vector<int> &arr, int m){
    int start=0,end=m-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    vector<int> arr={1,2,3,4,5};
    reverseArray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    vector<int> arr1={1,2,3,4,5};
    reverseArray_2ndApproach(arr1,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}