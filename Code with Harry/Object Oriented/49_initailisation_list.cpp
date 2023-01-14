#include<iostream>
using namespace std;

/*
syntax for initialisation list in constructor:
constructor (argument-list): initialisation-section{
    assignment + other code
}
*/

class test{
    int a;//since a is declared 1st hence a will be initialised first
    int b;
    public:
        test(int i, int j):a(i), b(j){
            cout<<i<<endl<<j<<endl;
        }
};

int main()
{
    test o(1,2);
    return 0;
}