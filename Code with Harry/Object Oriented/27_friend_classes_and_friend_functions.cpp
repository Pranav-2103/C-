//isme hum class b ke member functions ko friend bana rahe hai class a ka... jisse ki wo class a ke private
//members ko access kr ske.

#include<iostream>
using namespace std;

class complex; //forward declaration of class complex
class calculator;//forward declaration of class calculator

//doubt:
    //why do we need do define the class calculator before complex when I have already forward declared it...

class calculator{
    public:
        int add(int a, int b){
            return (a+b);
        }
        int sumRealComplex(complex ,complex );//forward declaration of functions as till now complex class isn't
        int sumCompComplex(complex, complex);// defined therefore the compiler will throw the error.
};

class complex{
    int a{};
    int b{};
    //individually declaring functions as friends
    // friend int calculator ::sumRealComplex(complex ,complex );
    // friend int calculator ::sumCompComplex(complex ,complex );
    //aliter: Declaring the whole class as friend
    friend class calculator;
    public:
        void setnumber(int n1,int n2){
            a=n1;
            b=n2;
        }
        
};



int main()
{
    complex o1,o2;
    o1.setnumber(1,4);
    o2.setnumber(5,7);
    calculator calc;
    int res{};
    res = calc.sumRealComplex(o1,o2);
    int resc{};
    resc = calc.sumCompComplex(o1,o2);

    cout<<"Add real numbers: "<<res<<endl;
    cout<<"Add imaginary numbers: "<<resc<<endl;

    return 0;
}
int calculator ::sumRealComplex(complex o1, complex o2){
    return(o1.a+o2.a); 
}
int calculator ::sumCompComplex(complex o1, complex o2){
    return(o1.b+o2.b); 
}