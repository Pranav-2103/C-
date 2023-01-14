#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    public:
        simple(int a,int b=9){//we can pass default arguments in constructors
            data1 = a;
            data2 = b;
        }

        void printdata();
};

void simple ::printdata(){
    cout<<"The value of data1 and data 2 are "<<data1<<" and "<<data2<<endl;
}

int main()
{
    simple s(1,4);  //this will print 1 and 4
    s.printdata();
    
    simple d(1); //this will print 1 and the default value 9
    d.printdata();

    return 0;
    return 0;
}