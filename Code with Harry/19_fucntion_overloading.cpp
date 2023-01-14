#include<iostream>
using namespace std;
//function overloading means we can use same name functions for different purposes bs number of arguents alag hone chahiye..
int sum(int a, int b);
int sum(int a, int b, int c);
float volume(float r, int h);  //all three fucntions have same name but are used to calculate different volumes..
float volume(int a);
float volume(int l, int b, int c);

int main()
{
    cout<<"the sum of 4 and 5 is: "<<endl<<sum(4,5)<<endl;
    cout<<"the sum of 4,5 and 1 is: "<<endl<<sum(4,5,1)<<endl;    
    cout<<"the volume of cylinder is: "<<volume(4.5,10)<<endl;
    cout<<"the volume of cube is: "<<volume(5)<<endl;
    cout<<"the volume of cuboid is: "<<volume(2,3,4)<<endl;


    return 0;
}

int sum(int a, int b){
    cout<<"sum function with 2 arguments is called"<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"sum function with 3 arguments is called"<<endl;
    return a+b+c;
}
float volume(float r, int h){
    return(3.14 * r * r * h);
}
float volume(int a){
    return (a*a*a);
}
float volume(int l, int b, int h){
    return (l*b*h);
}