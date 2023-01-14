#include<iostream>
#include<string>//to use string functions like s.at() & s.length()
using namespace std;

class binary
{
    string s;//by default this sting s is in private class

    public:
    void read();        //all the functions here are public hence can be directly accessed from the main function
    void chk_bin();
    void ones_comp();
    void display();
};

void binary ::read() // :: known as scope resolution to tell that read function is of class binary
{
    cout<<"Enter a binary number "<<endl;
    cin>>s;
    chk_bin(); //chk bin fucntion is called here this type is known as nesting members
}

void binary ::chk_bin()
{
    for(int i{};i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Invalid binary number";//condition to check whether the entered number is binary or not
            exit(0);//if the  number is not binary then we will exit the code with the error message
        }  
    }
    ones_comp();//elsewise once comp function will be called
}
void binary ::display()
{
    for(int i{};i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

void binary ::ones_comp()
{
    cout<<"Binary number that you entered is: ";
    display();
    for(int i{};i<s.length();i++)
    {
        if(s.at(i) == '0')  //logic for ones compliment
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
    cout<<"Ones compliment of the given binary number is: ";
    display();
}
int main()
{
    binary num{};
    num.read();
    return 0;
}