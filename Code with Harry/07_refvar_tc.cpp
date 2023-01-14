#include<iostream>
using namespace std;

int main()
{
//     long double a = 34.4444;
//     int b = 34;
//     cout<<"value of long double is:"<<a<<endl<<"value of int b is:"<<b;
    int x = 9;
    int y = x; //by this we store the value of x in y.i.e., x and y are distinct variables just sharing same values.
    cout<<x<<endl;
    cout<<y<<endl;

    int u = 10;
    int &v = u;//here we make v as the reference variable for u meaning u and v both are same variables.
    cout<<u<<endl<<v<<endl;
    
    int p = 45;
    float k = 12.64;

    cout<<int(k)<<endl;//type casting.
    cout<<p+k<<endl<<p+int(k)<<endl<<p+(int)k<<endl;//both formats are same..
    return 0;
}