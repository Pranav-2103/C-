#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
       /*
       1. creating a constructor
       2. constructor is a special member function with the same name as of the class.
       3. It is used to initialize the objects of its class
       4. It is automatically invoked wehenver an object is created.
       */ 

      complex(void); //constructor declaration
      void printnnumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
      }
       
};

complex ::complex(void){//this is a default constructor as it accepts no parameter
    a=10;
    b=20;
    //cout<<"Hello world"; this is will also run three times as the constructor is also invoked three times.    
}

int main()
{
    complex c1,c2,c3;
    c1.printnnumber();
    c2.printnnumber();
    c3.printnnumber();

    return 0;
}

//characterstics of constructor

/*
1. It should be declared in the public section
2. They are automatically invoked whenever the object is created
3. They cannot return values & do not have return types
4. It can have default arguments
5. We cannot refer to the address
*/