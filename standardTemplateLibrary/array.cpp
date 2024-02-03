#include<iostream>
//library for stl array
#include<array>

using namespace std;

int main(){
    //normal array 
    int arr[4]={1,2,3,4};

    //stl to declare the array in background its a static array only
    array<int,4> a={1,2,3,4};

    //gives you the size
    int size= a.size();

    for(int i=0;i<size;i++){
        cout << a[i] <<"\t";
    }
    cout <<endl;

    cout<<"Element at 2nd Index is :"<< a.at(2)<<endl;
    cout<<"Is array empty :"<<a.empty()<<endl;

    cout<< "First Elemet is :"<< a.front()<<endl;
    cout<< "Last Elemet is :"<< a.back()<<endl;
    return 0;
}