#include<bits/stdc++.h>
using namespace std;

class employee{//it is similar to sturcture but we can include funcitons in classes whereas this can't be done
    private://in the case of structure..
        int a, b, c;//these are private and they can't be accessed directly they need to be acessed via function
    public:
        int d, e;//public elements that can be accessed directly.
        void setdata(int a1, int b1, int c1);//this function will be used to access private variables
        void getdata(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;

        }
};

void employee :: setdata(int a1, int b1, int c1)//syntax for defining the function declared in a class. 
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee pranav;
    pranav.d = 90;
    pranav.e = 56;
    pranav.setdata(1, 2, 3);
    pranav.getdata();
    return 0;
}