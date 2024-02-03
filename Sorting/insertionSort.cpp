#include<iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int> &arr, int n){
    int i,j,temp;
    for(i=1; i<n ;i++){
        temp=arr[i];
        for(j=i-1; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    cout <<endl;
}

int main(){
    vector <int> arr={4,2,1,3,6};
    vector <int> arr1={64,25,12,22,11};
    cout<<"Sorted array is : ";
    insertionSort(arr1,5);
    cout<<endl;
    return 0;
}