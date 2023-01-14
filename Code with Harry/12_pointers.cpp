#include<iostream>
using namespace std;

int main()
{
    int a = 6;
    int*b = &a;// &--> address of -- operator
                // * --> value at -- OR -- dereference operator (used to display value in pointer address.)
    cout<<b<<endl<<&a;

    //pointer to pointer
    int**c = &b;
    cout<<endl<<**c; 
    return 0;
}