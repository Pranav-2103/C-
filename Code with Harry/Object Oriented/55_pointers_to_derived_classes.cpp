#include<iostream>
using namespace std;

class base{
    public:
    int var1;
    void display(){
        cout<<"displaying base class variable var_base: "<<var1<<endl;
    }
};

class derived :public base{
    public:
        int var2;
        void display(){
            cout<<"displaying base class variable var_base: "<<var1<<endl;
            cout<<"displaying derived class variable var_derived: "<<var2<<endl;

        }
};

int main()
{
    base *basePointer;
    base obj_b;
    derived obj_d;
    basePointer = &obj_d;//base class ka pointer derived class ke object ko point kar sakta hai.

    basePointer->var1=34;
    // basePointer->var2=45; this will throw an error base pointer cannot access members of derived class though it is linked to derived class's object.
    basePointer->display();

    derived *derivedPointer;
    derivedPointer = &obj_d;

    derivedPointer->var1=95;//derived class ka pointer base + derived classes ke objects ko access kar sakta hai
    derivedPointer->var2=45;
    derivedPointer->display();
    return 0;
}

//base class ke pointer ko agar derived class ke point kara diya toh still
//base class ka pointer base class ke methods ko hi call karega.