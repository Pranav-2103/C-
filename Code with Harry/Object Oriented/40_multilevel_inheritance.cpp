// multilevel inheritance--> c is derived form b & b is derived from a
#include <iostream>
using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void student ::set_roll_number(int r){
    roll_number = r;
}

void student ::get_roll_number(){
    cout<<"The roll number is "<<roll_number<<endl;
}

class exam : public student{//here roll number will be inherited as protected and both functions will be inherited as public methods.
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};

void exam ::set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void exam ::get_marks(){
    cout<<"The marks obtained in maths are: "<<maths<<endl;
    cout<<"The marks obtained in physics are: "<<physics<<endl;
}

class result : public exam{
    float percentage;
    public:
        void display_result(){
            get_roll_number();
            get_marks();
            cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
        }
};

int main()
{
    result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0, 90.0);
    harry.display_result();
    return 0;
}

/*
NOTES:
    If we are inheriting B from A and C from B: [A-->B-->C]
    1. A is the base class for B and B is the base class for C
    2. ABC is called inheritance path
*/