#include<iostream>
#include<list>
using namespace std;

//list is used to store data

void display(list <int> &lst){
    list <int> ::iterator it;
    for(it=lst.begin();it!=lst.end();it++){//jab list khtm ho jaegi tb it list k end k equal ho jaega
        cout<<*it<<' ';
    }
    cout<<endl;
}
int main()
{
    list <int> list1;//list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    // list1.push_back(9);

    // list <int> ::iterator iter;
    // iter = list1.begin();

    // cout<<*iter;
    // iter++;
    // cout<<' '<<*iter;
    // iter++;
    // cout<<' '<<*iter;
    // iter++;
    // cout<<' '<<*iter;

    display(list1);
    //***REMOVING ELEMENTS FROM THE LIST
    // list1.pop_back();
    // list1.pop_back();//peeche se delete karega
    // list1.pop_front();//aage se delete karega
    // display(list1);
    // list1.remove(9);//will remove all nines from the list(middle se remove karne mei help karta hai)
    
    //SORTING THE LIST
    // list1.sort();//will sort in ascending order
    display(list1);
    // REVERSING THE LIST
    list1.reverse();
    display(list1);

    
    list <int> list2(3);//empty list of size 3(meaning elements hai but unki kuch value nahi hai)
    list <int> ::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;

//SORTING AND THEN MERGING THE LIST
    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"list 1 after merging: ";
    display(list1);

    return 0;
}