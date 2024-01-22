#include<iostream>
#include<vector>
using namespace std;
void moveZeroesToEnd(vector<int> &arr){
    int j,nonZero=0;
    cout<<"Size of array is : "<<arr.size()<<endl;

    for(j=0; j<arr.size(); j++){
            if(arr[j]!=0){
                swap(arr[j],arr[nonZero]);
                nonZero++;
            }
        }
    
    cout<<"Inside function : ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int main(){
    vector<int> arr={0,1,0,3,12};
    cout<<"Before moving Zeroes"<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    moveZeroesToEnd(arr);
    cout<<"After moving Zeroes"<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}