#include<iostream>
using namespace std;

class shop{
    int itemid[10]{};   //both arrays are declared in private class
    int itemprice[10]{};
    int counter{0};

    public:
        void setprice(void);//this function is used to input the data inside the array
        void displayprice(void);

};

void shop ::setprice(void){
    cout<<"Enter item id for item number "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter item price "<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop ::displayprice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with item id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
    
}

int main()
{
    shop shop_1;
    shop_1.setprice();
    shop_1.setprice();
    shop_1.displayprice();
    
    return 0;
}