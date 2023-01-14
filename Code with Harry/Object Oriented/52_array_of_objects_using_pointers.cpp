#include<iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
        void setdata(int a,  float b){
            id = a;
            price = b;
        }
        void getdata(void){
            cout<<"code of this item is "<<id<<endl;
            cout<<"price of this item is "<<price<<endl;
        }
};

int main()
{
    int size = 3;

    //here we are declaring a pointer named ptr which stores the address of the first object of class shop.
    //new shop[size] creates the array of pointers or we can say create size number of objects of class shop dynamically
    //general store item
    //veggies item
    //hardware item

    shop *ptr = new shop[size];
    shop *ptrtemp = ptr;
    int p;
    float q;
    for(int i=0; i<size; i++){
        cout<<"Enter ID and price of item "<<i+1<<endl;
        cin>>p>>q;
        (ptr+i)->setdata(p,q);
        // ptr++;
    }
    for(int j=0;j<size;j++){
        cout<<"item number: "<<j+1<<endl;
        (ptrtemp+j)->getdata();
        // ptrtemp++;
    }
    return 0;
}