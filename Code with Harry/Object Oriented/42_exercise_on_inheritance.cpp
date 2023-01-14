#include<iostream>
#include<cmath>
using namespace std;

class simple{
    protected:    
        double a;
        double b;
        char o;
    public:
        simple(){};
        simple(double x, double y, char z){
            a=x;
            b=y;
            o = z;
        }
        void calculation_simple();
        
};

void simple ::calculation_simple(){
    switch (o)
    {
    case '+':
        cout<<a<<" + "<<b<<" = ";
        cout<<a+b;
        break;
    case '-':
        cout<<a<<" - "<<b<<" = ";
        cout<<a-b;
        break;
    case '*':
        cout<<a<<" * "<<b<<" = ";
        cout<<a*b;
        break;
    case '/':
        cout<<a<<" / "<<b<<" = ";
        cout<<a/b;
        break;   
    default:
        break;
    }
}

class science{
    protected:
        double a,b;
        char o;
    public:
        science(){}
        science(double x, double y, char z){
            a=x;
            b=y;
            o = z;
        }
        int factorial_a();
        int factorial_b();
        void calculation_science();

};


int science ::factorial_a(){
    int fact=1;
    for(int i=2;i<=a;i++){
        fact = fact*i;
    }
    return fact;
}
int science ::factorial_b(){
    int fact=1;
    for(int i=2;i<=b;i++){
        fact = fact*i;
    }
    return fact;
}
void science ::calculation_science(){
    switch(o){
        case 's':
            cout<<"Sqaure root of "<<a<<" = "<<sqrt(a)<<endl;
            cout<<"Sqaure root of "<<b<<" = "<<sqrt(b);
            
            break;
        case 'l':
            cout<<"Log base 10 of "<<a<<" = "<<log10(a)<<endl;
            cout<<"Log base 10 of "<<b<<" = "<<log10(b);
            break;
            
        case 'p':
            cout<<a<<" to the power "<<b<<" = "<<pow(a,b);
            break;
        case 'f':
            cout<<a<<"! "<<" = "<<factorial_a()<<endl;
            cout<<b<<"! "<<" = "<<factorial_b();
            break;
        default:
            break;
    }
}
class hybrid :public simple, public science{
    public:
        hybrid(double x, double y, char z){
            simple(x,y,z);
            science(x,y,z);
        }
        void calculation_hybrid(){
            if(simple ::o == '+' || simple ::o == '-' || simple ::o == '*' || simple ::o == '/')
                calculation_simple();
            else
                calculation_science();
        }
};
int main()
{
    double x,y;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    int choice;
    cout<<"Enter 1 for simple calculator, 2 for scientific calculator and 3 for hybrid calculator: ";
    cin>>choice;
    
    if(choice==1){
    char z;
    cout<<"Enter the operation that you want to perform from the following"<<endl
        <<"For addition enter '+'"<<endl<<"For subtraction enter '-'"<<endl<<"For multiplication enter '*'"
        <<endl<<"For division enter '/' "<<endl<<"enter here: ";
    cin>>z;
        simple o1(x,y,z);
        o1.calculation_simple();
    }
    else if(choice==2){
    char z;
    cout<<"Enter the operation that you want to perform from the following"<<endl
        <<"for squareroot enter 's'"<<endl<<"for calculating power enter 'p'"<<
        endl<<"for taking log enter 'l'"<<endl<<"for taking factorial enter 'f'"<<endl<<"enter here: ";
    cin>>z;        
        science o2(x,y,z);
        o2.calculation_science();
    }
    else if(choice == 3){
        char z;
        cout<<"Enter the operation that you want to perform from the following"<<endl
            <<"For addition enter '+'"<<endl<<"For subtraction enter '-'"<<endl<<"For multiplication enter '*'"
            <<endl<<"For division enter '/' "<<endl<<"for squareroot enter 's'"<<endl<<"for calculating power enter 'p'"<<
            endl<<"for taking log enter 'l'"<<endl<<"for taking factorial enter 'f'"<<endl<<"enter here: ";
        cin>>z;
        hybrid o3(x,y,z);
        o3.calculation_hybrid();
    }
    return 0;
}