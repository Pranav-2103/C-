#include<iostream>
#include<fstream>//to work with files(input output etc..)
//above library includes the all three classes mentioned below


// The useful classes for working with files in c++ are:
//1. fstreambase 2.ifstream-->derived from fstreambase 3.ofstream-->derived from fstreambase

//In order to work with files in c++, you will have to open it. There are two ways to open a file: 
//1. using the constructor   2. using the member function open() of the class

using namespace std;

int main()
{
    string st="Pranav Bhai";
    string st2;
    //opening file using constructor and writing it
    ofstream out("60_sample.txt");//write operation
    out<<st;

    //opening file using constructor and reading it
    ifstream in("60_sample2.txt");
    // in>>st2;
    getline(in, st2);//only one line will be printed
    getline(in, st2);//now 2nd line will be pirnted
    cout<<st2;
    
    return 0;
}