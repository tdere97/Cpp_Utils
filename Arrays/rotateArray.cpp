#include<iostream>
#include<vector>
using namespace std;
void rotateArray(vector<int> &arr, int k){
    int n=arr.size();
    vector<int> temp(n);

    for(int i=0; i<n; i++){
        temp[(i+k)%n]=arr[i];
    }
    arr=temp;
}
int main(){
    vector<int> arr={1,7,9,11};
    int k=2;
    rotateArray(arr,k);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;


    return 0;
}