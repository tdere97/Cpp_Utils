#include<iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int> &arr, int size){
    for(int i=1; i<size ;i++){
        for(int j=0; j<size-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    cout <<endl;
}

int main(){
    vector <int> arr={4,2,1,3,6};
    vector <int> arr1={64,25,12,22,11};
    cout<<"Sorted array is : ";
    bubbleSort(arr1,5);
    cout<<endl;
    return 0;
}