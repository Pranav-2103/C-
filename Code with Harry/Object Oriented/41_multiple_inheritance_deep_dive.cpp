//multiple inheritance means 2 base class se 1 derived class
#include<iostream>
using namespace std;
//syntax for multiple inheritance
// class derivedC :visibility-mode base1, visibility-mode base2{
//     class body of class "derivedC"
// };

class base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
};

class base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }
};

class derived :public base1, public base2{
    //base1int and base2int has been inherited to derived class
    public:
        void show(){
            cout<<"The value of base1 is "<<base1int<<endl;
            cout<<"The value of base2 is "<<base2int<<endl;
            cout<<"The value of base1 + base2 is "<<base1int+base2int<<endl;

        }
};
int main()
{
    derived harry;
    harry.set_base1int(25);
    harry.set_base2int(5);
    harry.show();
    return 0;
}
/*
The inherited derived class will look something like this:
data members:
    base1int-->protected
    base2int-->protected
member fucntions:
    set-base1int-->public
    set-base2int-->public
    show-->public
*/