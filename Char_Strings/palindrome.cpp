#include<iostream>
#include<vector>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }else{
        char temp=ch-'A'+'a';
    }
}
bool checkPalindrom(char name[], int n){
    int start=0, end=n-1;

    while(start<end){
        if(toLowerCase(name[start++])!=toLowerCase(name[end--])){
            return false;
        }
    }
    return true;
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
    cout<<"Enter the string : ";
    cin>>name;

    cout<<"Your string is : "<<name<<endl; 
    cout<<"Is a Palindrome : "<<checkPalindrom(name,getLength(name))<<endl;
    return 0;
}