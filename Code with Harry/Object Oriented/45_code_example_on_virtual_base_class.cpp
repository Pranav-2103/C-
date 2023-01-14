#include<iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll number is: "<<roll_no<<endl;        
        }
};

class test :virtual public student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(void){
            cout<<"Your result is here: "<<endl
                <<"Maths: "<<maths<<endl
                <<"Physics: "<<physics<<endl;
        }
};

class sports : public virtual student{ //kaise bhi likho koi farak nhi padta...
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;

        }
        void print_score(void){
            cout<<"Your PT score is: "<<score<<endl;
        }
};

class result : public test, public sports{
    private:
        float total;
    public:
        void display(){
            total = maths+physics+score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;
        }
};
int main()
{
    result vansh;
    vansh.set_number(6900);
    vansh.set_marks(78,90);
    vansh.set_score(99);
    vansh.display();
    return 0;
}
/*
agar virtual base class nahi lagaoge toh roll no set number and print number ye teeno methods do do baar inherit ho jaaenge result class
mei and then kya hoga ki main funtion/ compiler ko samajh nahi aaega konse ka method call kru toh isliye isko avoid krne k liye hum virtual
base class ka use krte hai jo ye sure krta hai ki roll number... ye sab do do baar inherit hoke ambiguity cause na karde.
*/