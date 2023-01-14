#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {0,1,2,3,4};
//using while loop.
    int i = 0;
    // while(i<5){
    //     cout<<arr[i]<<endl;
    //     i++;
    // }
//usnig do while loop.
    // do{
    //     cout<<arr[i]<<endl;
    //     i++;
    // }while(i<5);

    int*p = arr; //in case of arrays we dont need to use & we just write the name of the array...
    cout<<p<<endl; //gives the address of 0th element of array arr.
    cout<<p+1<<endl; //gives the adddress of 1st element of array arr.
    cout<<p+2<<endl;  // address of 2nd element of array arr.
    cout<<*(p+3)<<endl; //gives value at adress of p+3.

    //pointer arithmatic:
    //new address = current address + i*(size_of_datatype)
    return 0;
}