#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void setdata(int a){
            // a=a;   sbse zyada priority local variable ko di jaati hai
            this->a=a; //this is a keyword which is a pointer to the object which invokes the member function
        }

        // A setdata(int a){
        //     // a=a;   sbse zyada priority local variable ko di jaati hai
        //     this->a=a; //this is a keyword which is a pointer to the object which invokes the member function
        //     return *this;
        // }//since setdata has the data type of A hence it will return an object.


        void getdata(){
            cout<<"the value of a is "<<a<<endl;
        }
};

int main()
{
    A a;
    a.setdata(4);//.getdata();
    //now since setdata(4) will return an object hence that object can itself invoke getdata member
    a.getdata();
    return 0;
}