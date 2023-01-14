#include<iostream>
using namespace std;
class y; //if this declaration is not given then error will be thrown by the compiler as y will not be declared 
class x{    //when it reaches y in class x in function void add(x,y)
    int data;
    public:
        void setvalue(int value){
            data=value;
        }  
    friend void add(x,y);
};

class y{
    int num;
    public:
        void setvalue(int value){
            num=value;
        }
    friend void add(x,y);
};

void add(x o1, y o2){
    cout<<"summing datas of x and y objects give me "<<o1.data+o2.num;
}

int main()
{
    x a1;
    a1.setvalue(3);
    y b2;
    b2.setvalue(5);

    add(a1,b2);
    return 0;
}