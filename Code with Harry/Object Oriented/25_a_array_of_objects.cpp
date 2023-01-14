#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public:
        void setid(void){
            salary = 122;
            cout<<"Enter the id of the employee "<<endl;
            cin>>id;
        }
        void printid(void){
            cout<<"The id of this employee is "<<id<<endl;
        }
};

int main()
{
    // employee pranav, vansh;  well this is easy for the less number of employees
    // pranav.setid();          but if we have 1000 employees then it will be very difficult
    // vansh.setid();           hence we can create array of objects in employee class so that we dont have to
    // pranav.printid();        create 1000 employee variables
    // vansh.printid();

    //**best method

    employee names[4];
    for (int i = 0; i < 4; i++)
    {
        names[i].setid();
        names[i].printid();
    }
    

    return 0;
}