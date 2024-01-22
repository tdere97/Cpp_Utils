#include<iostream>
using namespace std;
int main(){
    int row, rows, column, columns, count;
    cout<< "enter the rows horizontal" <<endl;
    cin>>rows;
    cout<< "enter the columns vertical" << endl;
    cin>>columns;
        cout << "Pattern 1"<<endl;
    row=1;
    while(row<=rows){
        column=1;
        while(column<=columns){
            cout<<"*"<<"\t";
            column++;
        }
        cout<<endl;
        row++;
    }
    cout << "Pattern 2"<<endl;
    row=1;
    while(row<=rows){
        column=1;
        while(column<=row){
            cout<<"*"<<"\t";
            column++;
        }
        cout<<endl;
        row++;
    }
    cout << "Pattern 3"<<endl;
    row=1;
    while(row<=rows){
        column=1;
        while(column<=row){
            cout<<"*"<<"\t";
            column++;
        }
        cout<<endl;
        row++;
    }
    cout << "Pattern 4"<<endl;
    row=1;
    while(row<=rows){
        int space=rows-row;
        while(space)
        {
            cout<<"\t";
            space--;
        }
        column=1;
        while(column<=row){
            cout<<"*"<<"\t";
            column++;
        }
        cout<<endl;
        row++;
    }
    cout << "Pattern 5"<<endl;
    row=1;
    while(row<=rows){
        column=1;
        while(column<=rows-row+1){
            cout<<"*"<<"\t";
            column++;
        }
        cout<<endl;
        row++;
    }
    cout << "Pattern 6"<<endl;
    row=1;
    while(row<=rows){
        int space=row-1;
        while(space)
        {
            cout<<"\t";
            space--;
        }
        column=1;
        while(column<=rows-row+1){
            cout<<"*"<<"\t";
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}