#include<iostream>
using namespace std;
bool isPosibleSolution(int arr[],int size,int student,int mid){
    int sCount=1,pageCount=0;
    for(int i=0;i<size;i++){
    if(pageCount+ arr[i] <= mid){
        pageCount+=arr[i];
    }
    else{
        sCount++;
        if(sCount>student || arr[i]>mid){
            return false;
            }
    }
    }
    return true;
}

int xyz(int arr[],int size,int student){
    int start=0,end,mid,sum=0,answer=-1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    end=sum;
    mid=start+(end-start)/2;
    cout<<"Sum of array element is : "<<sum<<endl;
    while(start<=end){
        if (isPosibleSolution(arr,size,student,mid)){
            answer=mid;
            end=mid-1;
            }
        else{
            start=mid+1;
            }
            mid=start+(end-start)/2;
    }
    return answer;
}
int main(){
    int arr[]={10,20,30,40};
    int student=2;
    cout<<"Sqrt is : "<< xyz(arr,4,student)<<endl;
    return 0;
}