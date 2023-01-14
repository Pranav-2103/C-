#include<iostream>
using namespace std;

class base{
    int data1; //private by default and not inheritable
    public:
        int data2;
        void setdata();
        int getdata1();
        int getdata2();

};

void base ::setdata(void){
    data1 = 10;
    data2 = 20;
}

int base ::getdata1(void){
    return data1;
}

int base ::getdata2(void){
    return data2;
}

class derived : private base{
    int data3;
    public:
        void process();
        void display();
};

void derived ::process(){
    setdata();
    data3 = data2*getdata1();
}
void derived ::display(){
    cout<<"Value of data 1 is "<<getdata1()<<endl;
    cout<<"Value of data 2 is "<<data2<<endl;
    cout<<"Value of data 3 is "<<data3<<endl;

}
int main()
{
    derived der;
    // der.setdata(); here we cannot call setdata directly as it is now a private member of class derived 
                    //that is inherited form class base privately
    der.process();
    der.display();
    return 0;
} 
/**********concept*********
data1 is private member of base class ,  setdata is public method of base class
but since we derive the derived class privately therefore setdata becomes the public method of the derived class
and now we cannot access the setdata directly in our driver code therefore we call it in process function
which is a public method of the derived class hence it can easily access the priavte members of the derived class
that is setdata1 
***************************/