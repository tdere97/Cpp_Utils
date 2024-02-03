#include<iostream>
#include<vector>
using namespace std;
vector<int> mergeSortedArray(vector<int> arr,vector<int> arr1){
    int size1=arr.size(), size2=arr1.size(),i=0,j=0,k=0,size3=size1+size2;
    vector<int> res(size3,0);

    cout<<"size 1: "<<size1<<"\n"<<"size 2: "<<size2<<"\n"<<"size 3: "<<size3<<endl;

    while((j<size2) && (i<size1)){
            if(arr[i]<arr1[j])
            {
                res[k++]=arr[i++];
            }
            else
            {
                res[k++]=arr1[j++];
            }
    }
    while(i<size1){
        res[k++]=arr[i++];
    }
    while(j<size2){
        res[k++]=arr1[j++];
    }
    return res;
}
int main(){

    vector<int> arr={1,3,5,7,8,9,12}, arr1={2,4,6,10,11,13},res;
    res=mergeSortedArray(arr,arr1);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"\t";
    }
    cout<<endl;
    return 0;
}