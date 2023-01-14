#include<iostream>
using namespace std;

// float funcaverage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }
//*******itne saare karne ki jagah function template bana dunga
// float funcaverage2(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// now we will declare a template

template<class T1, class T2>
float average(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    // a = funcaverage(5,2);
    a = average(5,6.0);
    cout<<a<<endl;
    int x = 5, y = 7;
    swapp(x,y);
    cout<<x<<endl<<y;
    return 0;
}