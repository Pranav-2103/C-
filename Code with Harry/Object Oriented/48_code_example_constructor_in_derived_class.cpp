#include<iostream>
using namespace std;

class base1{
    int data1;
    public:
        base1 (int i){
            data1 = i;
            cout<<"base1 class constructor is called"<<endl;
        }  
        void printdatabase1(void){
            cout<<"the value of data1 is "<<data1<<endl;
        }
};

class base2{
    int data2;
    public:
        base2 (int i){
            data2 = i;
            cout<<"base2 class constructor is called"<<endl;
        }  
        void printdatabase2(void){
            cout<<"the value of data2 is "<<data2<<endl;
        }
};

class derived: public base1, base2{//changing order of classes here will effect order of constructors invoke
    int derived1, derived2;
    public:
        derived(int a, int b, int c, int d):base2(c), base1(d){
        // derived(int a, int b, int c, int d):base1(a), base2(b){
        //doesn't matter the order of base classes in above line still base1 will be called first
            derived1 = a;
            derived2 = b;
            cout<<"derived class constructor called"<<endl;
        }
        void printdata(void){
            cout<<"the value of derived1 is "<<derived1<<endl;
            cout<<"the value of derived2 is "<<derived2<<endl;
        }
};

int main()
{
    derived vansh(1,2,3,4);
    vansh.printdata();
    return 0;
}