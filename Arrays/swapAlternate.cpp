#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){


    for(int i=0;i<size;i=i+2){
        if((i+1)<size){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
cout<<endl;

}
int main(){
    int arr[5]={1,2,3,4,5}, arr1[6]={4,2,3,6,7,8};
    swapAlternate(arr,5);
    swapAlternate(arr1,6);

    return 0;
}