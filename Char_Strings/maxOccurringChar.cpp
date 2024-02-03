#include<iostream>
#include<vector>
#include<string>
using namespace std;

//Approach 1
// char maxOccurringChar(string s){
//     int size=s.length();
//     int arr[26]={0};

//     for(int i=0; i<size; i++){
//         char ch =s[i];
//         int number=0;
//         number=ch-'a';
//         arr[number]++;
//     }
//     int max=-1,ans=0;
//     for(int i=0 ; i<26; i++){
//         if(max<arr[i]){
//             ans=i;
//             max=arr[i];
//         }
//     }
    
//     return 'a'+ ans;

// }

//Approach 2
char maxOccurringChar(string s){
    int finalOccurrence=0;
    char finalkey='a';

    for(int i=0; i<s.length(); i++){
        int occurrence=0;
        for(int j=0; j<s.length(); j++){
            if(s[i]==s[j]){
                occurrence++;
            }
        }
        if(occurrence>finalOccurrence){
            finalOccurrence=occurrence;
            finalkey=s[i];
        }
    }
    return finalkey;
}

int main(){
    string s="outputtt";
    cout<<"Your string is : "<<s<<endl; 

    cout<<"the max occurring letter is : "<<maxOccurringChar(s)<<endl;
    return 0;
}