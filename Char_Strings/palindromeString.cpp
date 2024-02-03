#include<iostream>
#include<vector>
#include<string>
using namespace std;
char toLowerCase(char ch){
    if((ch>='a' && ch<='z')|| (ch>='0' && ch<='9')){
        return ch;
    }else{
        char temp=ch-'A'+'a';
    }
}
bool validChar(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}
bool palindromeString(string s){
    string temp;

    for(int j=0; j<s.length(); j++){
        if(validChar(s[j])){
            temp.push_back(s[j]);
        }
    }

    for(int j=0; j<temp.length(); j++){
        temp[j]=toLowerCase(temp[j]);
    }  

    int start=0, end=temp.length()-1;

    while(start<end){
        if(temp[start++]!=temp[end--]){
            return false;
        }
    }
    return true;

}

int main(){
    string s="I am Mai";

    cout<<"Your string is : "<<s<<endl; 
    cout<<"Is a Palindrome : "<<palindromeString(s)<<endl;
    return 0;
}