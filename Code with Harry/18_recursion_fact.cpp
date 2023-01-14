#include<iostream>
using namespace std;

int factorial(int n);
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;
    return 0;
}

int factorial(int n){
    if(n==1){
        return 1;
    }
    
    else{
    return n*factorial(n-1);
    }
}