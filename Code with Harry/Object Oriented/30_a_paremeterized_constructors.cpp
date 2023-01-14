#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:

      complex(int, int); //constructor declaration
      void printnnumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
      }
};

complex ::complex(int x, int y){//--> This is a parameterized constructor as it takes 2 parameters
    a=x;
    b=y;
        
}

int main()
{
    //implicit call
    complex a(4,6);

    //explicit call
    complex b = complex(5,7);

    a.printnnumber();
    b.printnnumber();

    return 0;
}