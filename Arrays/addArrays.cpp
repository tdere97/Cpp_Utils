
#include<iostream>
#include<vector>
using namespace std;

//arr1= 1,2,3,4
//arr2=6
//1234+6=1240

//case 1: 1st array : 1,2,3,4 2nd array : 9
//case 2: 1st array : 9 2nd array : 1,2,3,4
//case 3: 1st array : 9,9,9 2nd array : 9,9,9

vector<int> reverseArray(vector<int> arr){
    int start=0, end=arr.size()-1;

    while(start<end){
        swap(arr[start++],arr[end--]);
    }
    return arr;
}

vector<int> addArray(vector<int> &arr1, vector<int> &arr2){
    int carry=0;
    int i=arr1.size()-1;
    int j=arr2.size()-1;
    vector<int> ans;

    while(i>=0 && j>=0){
        int sum=arr1[i]+arr2[j]+carry;        
        carry=sum/10;        
        sum=sum%10;        
        ans.push_back(sum);        
        i--;
        j--;
    }
    while(i>=0){
        int sum=arr1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);        
        i--;
    }
    while(j>=0){
        int sum=arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);        
        j--;
    }
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);        
    }
    cout<<"Inside Add :"<<"\t";
    for(int i=0; i<ans.size(); i++){
        cout <<ans[i]<<"\t";
    }
    cout<<endl;
    return reverseArray(ans);
}
int main(){
    vector<int> arr1={1,2,3,4}, arr2={6},ans;
    ans=addArray(arr1,arr2);

    cout<<"Addition of array is :"<< "\t";
    for(int i=0; i<ans.size(); i++){
        cout <<ans[i]<<"\t";
    }
    cout<<endl;
    return 0;
}