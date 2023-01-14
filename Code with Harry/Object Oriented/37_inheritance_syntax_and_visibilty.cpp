#include<iostream>
using namespace std;

//Base class
class employee{
    public:
    int id;
    float salary;
    employee(){}
    employee(int idp){
        id = idp;
        salary = 34;
    }
};

//Derived class syntax
/*class {{derived-class-name}} : {{visibilty-mode}} {{base-class-name}}
{
    class members/methods/etc...
}*/

//Creating a programmer class derived from employee base class
class programmer : public employee{//visibility mode: if we write private then all the public members of the base class
    public:                 //will be private members of class derived whereas if we write public then all the 
    int languagecode;   //public members of the base will be public members of the derived class
    programmer(int idp){
        id = idp;  
        languagecode = 9;
    }
    void getdata(){
        cout<<id<<endl;
    }
};                          
//default visibility mode is private.
//private members of the base class cannot be inherited in the derived class(by anyhow)
int main()
{
    employee vansh(45);
    cout<<vansh.salary<<endl;
    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    skillf.getdata();
    cout<<skillf.id<<endl;
    return 0;
}