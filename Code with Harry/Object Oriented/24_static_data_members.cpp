#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;//static variables are shared by class not by particular member but all members/objects.

    public:
        void setdata(void){
            cout<<"Enter the id "<<endl;
            cin>>id;
            count++;
        }
        void getdata(void){
            cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
        }

        static void getcount(void){
            // cout<<id;  // this throws an error as in static functions only static variables can be used
            cout<<"The value of count is "<<count<<endl;
        }
};

//count is the static data member of the class employee
int employee ::count;//default value of static variables is zero

int main()
{
    employee pranav,vansh;

    pranav.setdata();
    pranav.getdata();
    employee ::getcount();

    vansh.setdata();
    vansh.getdata();
    employee ::getcount();


    return 0;
}