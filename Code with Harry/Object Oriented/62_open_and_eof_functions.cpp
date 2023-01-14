#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream out;
    out.open("62.txt");//this will open 62 txt file
    out<<"This is me"<<endl;
    out<<"This is also me"<<endl;
    out<<"Hello world";
    out.close();//this will close txt file
    
    ifstream in;
    string st, st2;
    in.open("62.txt");
    // in>>st>>st2;
    // cout<<st<<st2;

    while(in.eof()==0){
        getline(in, st);
        cout<<st;
        cout<<endl;
    }
    return 0;
}