#include<iostream>
using namespace std;

void reverseArray(char name[], int n){
    int start=0, end=n-1;
    while(start<end){
        swap(name[start++],name[end--]);
    }
    cout<<"Reverse of name is : "<<name<<endl;
}

int getLength(char name[]){
    int count=0;
    for(int i=0; name[i] !='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter the Name : ";
    cin>>name;

    cout<<"Your name is : "<<name<<endl; 
    cout<<"Length of name is : "<<getLength(name)<<endl;
    reverseArray(name,getLength(name));
    return 0;
}