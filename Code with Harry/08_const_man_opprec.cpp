#include<iostream>
#include<iomanip>//used to include setw..
using namespace std;

int main()
{
    const int x = 98;//now as we have declared x as constant so we can't change its value by any means..
    
    
    int a = 98742;
    int b = 65;
    float c = 0.8534;

    cout<<"the value of a "<<a<<endl;
    cout<<"the value of b "<<b<<endl;
    cout<<"the value of c "<<c<<endl;

    cout<<"the value of a "<<setw(8)<<a<<endl;//setw is a manupulator which is used to set the spaces to be given to the variable's value
    cout<<"the value of b "<<setw(8)<<b<<endl;
    cout<<"the value of c "<<setw(8)<<c<<endl;

}