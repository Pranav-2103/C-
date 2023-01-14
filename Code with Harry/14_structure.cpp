#include<iostream>
using namespace std;

typedef struct employee
{
    int id;
    char favchar;
    float weight;
}em;//this is the new keyword which can be used in main function directly

int main()
{
    struct employee vansh;
    em pranav;//here we used em instead of struct employee
    vansh.id = 21;          
    vansh.favchar = 'v'; //this is how we input the data
    vansh.weight = 60.5;
    pranav.id = 9;
    pranav.favchar = 'p';
    pranav.weight = 75.5;

    cout<<vansh.id<<endl<<vansh.favchar<<endl<<vansh.weight<<endl;
    return 0;
}

