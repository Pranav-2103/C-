#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
        void getdata(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;

        }
        void setdata(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main()
{
    complex c1;
    complex *ptr = &c1;
    complex *ptr2 = new complex;//we can also use this instead of above 2 lines
    c1.setdata(1,54);//now we can replace c1 with *ptr
    (*ptr).getdata();
    
    //(*ptr).getdata(); is exactly same as
    ptr2->setdata(2,6);
    ptr2->getdata();

    //Array of objects
    complex *ptr3 = new complex[4];
    ptr3->setdata(5,5);
    (ptr3+1)->setdata(8,8);
    ptr3->getdata();
    (ptr3+1)->getdata();
    
    return 0;
}