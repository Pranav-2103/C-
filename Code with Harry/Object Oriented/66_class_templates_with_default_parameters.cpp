#include<iostream>
using namespace std;
template<class T1=int, class T2 = float, class T3 = char>

class harry{
    public:
        T1 a;
        T2 b;
        T3 c;
        harry(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};

int main()
{
    harry <> h(5,6.7,'C');//default jo specified hai woh use ho gaye
    h.display();
    cout<<"\n\n";
    harry <float, char, char> g(4.66,'V','F');//default ki jagah jo data types provide kare hai wo hi use karega compiler
    g.display();
    return 0;
}