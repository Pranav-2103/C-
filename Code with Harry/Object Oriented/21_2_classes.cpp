#include<bits/stdc++.h>
using namespace std;

class animals
{
    private:
        int id;
        string type;
    public:
        string name;
        int age;

        void details_1(int id_1,string type_1);
        void display()
        {
            cout<<"ID of the animal is: "<<id<<endl;
            cout<<"Type of the animal is: "<<type<<endl;
            cout<<"Name of the animal is: "<<name<<endl;
            cout<<"Age of the animal is: "<<age<<endl;
        }
};  

void animals :: details_1(int id_1, string type_1)
{
    id = id_1;
    type = type_1;
}

int main()
{
    animals _1;
    _1.details_1(69, "dog");
    _1.name = "tommy";
    _1.age = 2;
    _1.display();

    return 0;
}