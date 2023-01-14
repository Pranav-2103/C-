#include<iostream>
using namespace std;

int fib(int n);
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"the nth element of series is: "<<fib(n);
    return 0;
}

int fib(int n){
    if(n==0){
        return 0;
    }
    else if (n==1){
        return 1;//0 1 1 2 3 5 8 13
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}