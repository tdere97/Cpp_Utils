#include <iostream>
using namespace std;
int main(){
    int rows, columns, row, column, count=1;
    cout <<"enter the columns are vertical"<<endl;
    cin>>columns;
    cout <<"enter the rows are horizontal"<<endl;
    cin>>rows;
    char ch ='A';
    cout <<"Pattern 1"<<endl;
    for (row=1; row<=rows; row++)
    {
        for (column=1; column<=columns; column++)
        {
            cout << ch << '\t';
        }
        ch++;
        cout <<endl;
    }
    cout <<"Pattern 2"<<endl;
    for (row=1; row<=rows; row++)
    {
        ch='A';
        for (column=1; column<=columns; column++)
        {
            cout << ch << '\t';
            ch++;
        }
        cout <<endl;
    }
    ch='A';
    cout <<"Pattern 3"<<endl;
    for (row=1; row<=rows; row++)
    {
        for (column=1; column<=columns; column++)
        {
            cout << ch << '\t';
            ch++;
        }
        cout <<endl;
    }
    ch='A';
    cout <<"Pattern 4"<<endl;
    for (row=1; row<=rows; row++)
    {
        ch='A';
        for (column=1; column<=row; column++)
        {
            ch='A'+row-column;
            cout << ch << '\t';
        }
        cout <<endl;
    }
    ch='A';
    cout <<"Pattern 5"<<endl;
    for (row=1; row<=rows; row++)
    {
        for (column=1; column<=columns; column++)
        {
            ch='A'+row+column-2;
            cout << ch << '\t';
        }
        cout <<endl;
    }
    cout <<"Pattern 6"<<endl;
    for (row=1; row<=rows; row++)
    {
        ch='A'+rows-row;
        for (column=1; column<=row; column++)
        {
            cout << ch << '\t';
            ch++;
        }
        cout <<endl;
    }
return 0;
}