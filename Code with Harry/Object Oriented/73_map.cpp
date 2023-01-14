#include<iostream>
#include<map>
#include<string>
using namespace std;

// map is an associative array

int main()
{
    map <string, int> marksmap;
    marksmap["Harry"] = 98;
    marksmap["Ali"] = 44;
    marksmap["Khan"] = 2;

    marksmap.insert({{"Sonu", 78}, {"Monu", 88}});//to insert the elements in the map
    map <string, int> ::iterator iter;
    for(iter = marksmap.begin();iter!=marksmap.end();iter++){
        cout<<(*iter).first<<' '<<(*iter).second<<endl;
    }
    cout<<"The size is: "<<marksmap.size()<<endl;
    cout<<"The max size is: "<<marksmap.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksmap.empty()<<endl;//to check whether the map is empty or not if empty it wil return 0
    return 0;
}