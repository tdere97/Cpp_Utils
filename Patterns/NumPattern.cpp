#include <iostream>
using namespace std;
int main(){
    int rows, columns, row, column, count=1;
    cout <<"enter the columns are vertical"<<endl;
    cin>>columns;
    cout <<"enter the rows are horizontal"<<endl;
    cin>>rows;
    cout <<"Pattern 1"<<endl;
    for (row=1; row<=rows; row++)
    {
        for (column=1; column<=columns; column++)
        {
            cout << row << '\t';
        }
        cout <<endl;
    }
    cout <<"Pattern 2"<<endl;
    for(row=1; row<=rows; row++)
    {
        for(column=1; column<=columns; column++)
        {
            cout << column <<'\t';
        }
        cout<<endl;
    }
    cout <<"Pattern 3"<<endl;
    for(row=1; row<=rows; row++)
    {
        for(column=1; column<=columns; column++)
        {
            cout << columns - row + 1 <<'\t';
        }
        cout<<endl;
    }
    cout <<"Pattern 4"<<endl;
    for(row=1; row<=rows; row++)
    {
        for(column=1; column<=columns; column++)
        {
            cout << columns - column + 1 <<'\t';
        }
        cout<<endl;
    }
    cout <<"Pattern 5"<<endl;
    for(row=1; row<=rows; row++)
    {
        for(column=1; column<=columns; column++)
        {
            cout << count <<'\t';
            count++;
        }
        cout<<endl;
    }
    cout <<"Pattern 6"<<endl;
    count=rows*rows;
    for(row=1; row<=rows; row++)
    {
        for(column=1; column<=columns; column++)
        {
            cout << count <<'\t';
            count--;
        }
        cout<<endl;
    }
        cout<<"Pattern 7"<<endl;
    for(row=1; row<=rows; row++){
        for(column=1; column<=row; column++){
            cout<<row<<"\t";
        }   
        cout<<endl;
    }
    cout<<"Pattern 8"<<endl;
    count=1;
    for(row=1; row<=rows; row++){
        for(column=1; column<=row; column++){
            cout<<count<<"\t";
            count++;
        }   
        cout<<endl;
    }
    cout<<"Pattern 9"<<endl;
    for(row=1; row<=rows; row++){
        int value=row;
        for(column=1; column<=row; column++){
            cout<<value<<"\t";
            value++;
        }   
        cout<<endl;
    }
    cout<<"Pattern 10"<<endl;
    for(row=1; row<=rows; row++){
        for(column=1; column<=row; column++){
            cout<<row+column-1<<"\t";
        }   
        cout<<endl;
    }
    cout<<"Pattern 11"<<endl;
    for(row=1; row<=rows; row++){
        for(column=1; column<=row; column++){
            cout<<row-column+1<<"\t";
        }   
        cout<<endl;
    }
    cout<<"Pattern 12"<<endl;
    for(row=1; row<=rows; row++){
        int space;
        for(space=rows-row;space;space--){
            cout<<"\t";
        }
        for(column=1; column<=row; column++){
            cout<<column<<"\t";
        }   

        cout<<endl;
    }
    cout<<"Pattern 13"<<endl;
    for(row=1; row<=rows; row++){
        int space;
        for(space=rows-row;space;space--){
            cout<<"\t";
        }
        for(column=1; column<=row; column++){
            cout<<column<<"\t";
        }
        for(int start=row-1;start;start--){
            cout<<start<<"\t";
        } 
        cout<<endl;
    }
    for(row=1; row<=rows; row++){
        //1st triangle
        for(column=1; column<=columns-row+1;column++){
            cout<<column<<"\t";
        }
        //2nd triangle
        int star=row-1;
        while(star){
            cout<<"*"<<"\t";
            star--;
        }
        //3rd triangle
        star=row-1;
        while(star){
            cout<<"*"<<"\t";
            star--;
        }
        //4th triangle
        int start=column-1;
        while(start)
        {
            cout<<start<<"\t";
            start--;
        }

        cout<<endl;
    }


    return 0;
}