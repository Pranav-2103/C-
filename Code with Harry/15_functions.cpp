#include<iostream>
using namespace std;

int add(int a, int b); //prototype of function
int main()
{
    int n1, n2;
    cin>>n1;
    cin>>n2;
    cout<<n1<<" + "<<n2<<" = "<<add(n1,n2); //function called
    return 0;
}

int add(int a, int b) //fucntion defined
{
    int c = a+b;
    return c;
}