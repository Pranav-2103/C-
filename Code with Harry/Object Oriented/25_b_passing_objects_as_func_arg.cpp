// passing objects as function arguments...

#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        void setdata(int v1, int v2){//a and b are private class members therefore they cant be accessed directly
            a = v1;
            b = v2;
        }
        void setdatabysum(complex o1,complex o2){//function that takes class objects as arguments
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void print(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main()
{
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.print();

    c2.setdata(3,4);
    c2.print();

    c3.setdatabysum(c1,c2);
    c3.print();
    return 0;
}