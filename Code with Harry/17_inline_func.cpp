#include<iostream>
using namespace std;

// int product(int a, int b){
//     return a*b;
// }

inline int product(int a, int b){ //now this has become an inline function.
    return a*b;
}//this is not used in complex functions or recursions or functions having static integer..

// int product(int a, int b){
//     static int c =0;  here this line will be executed only once
//     c = c+1;  in the following line only this line will be executed and the value of c will be retained
    
//     return a*b;
// }

int main()
{
    int a, b;
    cout<<"Enter a and b:"<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is: "<<product(a,b)<<endl;
    cout<<"the product of a and b is: "<<product(a,b)<<endl; //here the function will be called and all the
    cout<<"the product of a and b is: "<<product(a,b)<<endl; //lines in the function will be executed everytime..
    cout<<"the product of a and b is: "<<product(a,b)<<endl;
    cout<<"the product of a and b is: "<<product(a,b)<<endl; //hence code will take more time to execute
    cout<<"the product of a and b is: "<<product(a,b)<<endl;
    cout<<"the product of a and b is: "<<product(a,b)<<endl;//when the inline function is included
    cout<<"the product of a and b is: "<<product(a,b)<<endl;//now the function will be executed only in first line
    cout<<"the product of a and b is: "<<product(a,b)<<endl;//and after that its value will be directly copied
    cout<<"the product of a and b is: "<<product(a,b)<<endl;//in following lines hence time is saved by using
    cout<<"the product of a and b is: "<<product(a,b)<<endl;//inline functions. But it increases the memory of
    cout<<"the product of a and b is: "<<product(a,b)<<endl;//the code..
    cout<<"the product of a and b is: "<<product(a,b)<<endl;

    
    return 0;
}