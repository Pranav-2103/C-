#include<iostream>
using namespace std;

class number{
    int a;
    public:
        number(){
            a=0;
        }
        number(int num){
            a=num;
        }
        //when no copy constructor is found compiler supplies its own copy constructor.
        number(number &obj){
            cout<<"Copy Constructor called"<<endl;
            a=obj.a;
        }

        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main()
{
    number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
    //z1 should exactly resemble
    number z1(z);//here we make a object of class number which can take another object
                 // of class number as argument(copy constructor invoked)
    z1.display();
    z2=z;//copy constructor not invoked
    number z3=z;//copy constructor invoked

    //jab object bana banaya rakha hota hai tab copy constructor call nahi hota 
    //create krte waqt hota h copy constructor call

    return 0;
}