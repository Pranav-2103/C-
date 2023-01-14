#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    //connecting our file with hout stream
    ofstream hout("61_sample.txt");   //likhne k liye use hota hai ye

    //creating a name string and filling it with the string entered by the user
    cout<<"Enter your name:";
    string name;
    cin>>name; 

    //writing a string to the file
    hout<<name+" is my name";
    hout<<"\n hello world";//ye bhi input ho jaaega na ki file  overwrite hogi dono content wahi rahenge
    hout.close();

    ifstream hin("61_sample.txt");//file mei likhe huye ko show krne  k liye
    string content;
    // hin>>content;
    getline(hin, content);
    cout<<"The content of this file is: "<<endl<<content;
    return 0;
}