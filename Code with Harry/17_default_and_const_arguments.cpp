#include<iostream>
using namespace std;

float moneyrecieved(int money, float factor = 1.04){//here factor is default argument..
    return money*factor; 
}

// float moneyrecieved(int money, const int *factor = 2){//here factor is constant argument..
//     return money*factor; 
// }

int main()
{
    int money = 100000;
    cout<<"Final money : "<<moneyrecieved(money)<<endl;
    cout<<"Final money for VIP : "<<moneyrecieved(money, 1.08)<<endl;
    return 0;
}