#include<iostream>
using namespace std;

/*
    1+4i
    5+8i
    ____
    6+12i
*/

class complex{
    int a,b;
    public:
        void setnumber(int n1,int n2){
            a = n1;
            b = n2;
        }
        //Below line means that non member -sum complex function is allowed to do anything with private
        //members of the class. (meaning it gives permission to sumcoplex function to access private members)

        friend complex sumComplex(complex o1, complex o2);//even the class have friend function's prototype
        void printnumber(void){                            // it is still not the member of class
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex sumComplex(complex o1, complex o2){
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1,c2,sum;
    c1.setnumber(1,4);
    c1.printnumber();
    
    c2.setnumber(5,8);
    c2.printnumber();

    sum = sumComplex(c1,c2);
    sum.printnumber();
    return 0;
}

/*
PROPERTIES OF FRIEND FUNCTION
    1.Not in the scope of class
    2.since it is not in the scope of the class, it cannot be called from the object of that class.
        c1.sumcomplex() == invalid.
    3.can be invoked without the help of any object
    4.usually contains objects as arguments
    5.can be declared inside public or private section of the class
    6.It cannot access the members directly by their names but need object_name.member_name to access any member.
*/