#include<iostream>
using namespace std;

class base{
    public:
    int var1=1;
    virtual void display(){//now since we have declared our display funtion of base class as virtual now if the
    //base class pointer will point to derived class object then derived class's display function will execute not the base class's.
        cout<<"1 displaying base class variable var_base: "<<var1<<endl;
    }
};

class derived :public base{
    public:
        int var2=2;
        void display(){
            cout<<"2 displaying base class variable var_base: "<<var1<<endl;
            cout<<"2 displaying derived class variable var_derived: "<<var2<<endl;

        }
};

int main()
{
    base* basePointer;
    base ojb_b;
    derived ojb_d;

    basePointer = &ojb_d;
    basePointer->display();

    return 0;
}

/*
matlab yeh hai ki aap base class ka pointer bana rahe ho then usko derived class ke object se point kara rahe ho but still wo derived class ke function ya fir
variables ko access nahi kar paega but agar same name ke methods hai dono classes mei toh kya hoga base class ke uss function ke aage virtual laga dege taaki 
pointer through call krne pr derived class ka funtion invoke hoye
*/