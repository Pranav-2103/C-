#include<iostream>
using namespace std;

int main()
{
    //basic example
    int a = 4;
    int* ptr = &a;
    
    cout<<"The value of a is "<<*(ptr)<<endl;

    //new keyword
    //stores the the value directly at the address
    int *p = new int(40);//dynamically initialisation
    cout<<"The value at address p is "<<*(p)<<endl;
    cout<<"The value of address p is "<<(p)<<endl;

    int *arr = new int[3];
    arr[0] =10;
    arr[1] =20;
    arr[2] =30;

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    //delete operator
    delete[] arr;//to free up the complete array
    cout<<"The value of arr[0] is "<<arr[0]<<endl;//now it wil produce garbage values
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    return 0;
}