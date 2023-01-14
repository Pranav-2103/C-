#include<iostream>
using namespace std;

/*
template<class t1, class t2...>(and many more comma separated)
class nameofclass{
    code...
}
*/
template<class T1, class T2>
class myclass{
    public:
        T1 data1;
        T2 data2;

        myclass(T1 a, T2 b){
            data1=a;
            data2=b;
        }
        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};

int main()
{
    myclass <int, char> obj(4,'C');
    myclass <int, float> obj2(5,6.789);
    obj.display();
    obj2.display();
    return 0;
}