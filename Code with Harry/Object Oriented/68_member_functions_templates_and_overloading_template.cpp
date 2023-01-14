#include<iostream>
using namespace std;

template<class T>
class harry{
    public:
        T data;
        harry(T a){
            data = a;
        }
        void display();
};

template<class T>
void harry<T> ::display(){
    cout<<data;
    }
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
template<class T>
void func(T a){
    cout<<"templatised funtion "<<a<<endl;
}
template<class T>
void func1(T a){
    cout<<"templatised funtion "<<a<<endl;
}
int main()
{
    harry<float>h(5.67);
    harry<char>f('C');
    // cout<<h.data<<endl;
    // h.display();
    // cout<<endl;
    // f.display();

    func(4);//exact match takes the highest priority
    cout<<endl;
    func1(4);
    return 0;
}