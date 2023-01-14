#include<iostream>
using namespace std;

typedef union money
{
    int ruppee;
    float dollars;
    char car;
}mo;//here also we can use shortcuts just like structure


int main()
{
    union money house;
    house.ruppee = 2500000; //not stored
    house.dollars = 46000;//not stored
    house.car = 'S'; //only the latest info is stored

    cout<<house.ruppee<<endl; //wrong output.
    cout<<house.dollars<<endl; //wrong output.
    cout<<house.car<<endl; //correct output.(because car detaile is the latest one and rest all before that has been overwritten)
    
    return 0;
}