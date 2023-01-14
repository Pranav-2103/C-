#include<iostream>
using namespace std;

class base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class base2{
    public:
      void greet(){
            cout<<"kaise ho?"<<endl;
        }  
};

class derived :public base1, public base2{
    int a;
    public:
        void greet(){
            base1 ::greet();//now greet of derived class will call greet of base1 class.
        }
};

class b{
    int a;
    public:
        void say(){
            cout<<"Hello World"<<endl;
        }
};

class d :public b{
    int a;
    public:
        void say(){
            cout<<"Hello Universe"<<endl;
        }
};
int main()
{
    
    // base1 base1obj;
    // base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();

    // derived d;
    // d.greet();
    b B;
    d D;
    B.say();
    D.say();//here the say of d class will be called as it is it's own function
    return 0;
}