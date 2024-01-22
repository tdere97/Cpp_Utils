#include<iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int> &arr, int size){
    int minIndex;
    for(int i=0; i<size-1 ;i++){
        minIndex=i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
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
    selectionSort(arr1,5);
    cout<<endl;
    return 0;
}