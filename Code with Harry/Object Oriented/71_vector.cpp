#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v){
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<' ';
        cout<<v.at(i)<<' ';//dono lines ka meaning same hai
    }
    cout<<endl;
}

int main()
{
    //ways to create a vector

    vector <int> vec1;//zero length integer vector
    vector <char> vec2(4);//4 element character vector
    vector <char> vec3(vec2);//4 elemet character vector from vec2
    vector <int> vec4(6,3);//6 element vector of 3s
    int element, size=5;

    // cout<<"Enter the size of the vector"<<endl;
    // cin>>size;
    // for(int i=0;i<size;i++){
    //     cout<<"Enter the element to add to this vector: ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();//last element ko hata deta hai

vector<int>

    display(vec1);
    vector<int> ::iterator iter = vec1.begin();
    vec1.insert(iter+1,5, 566);//jaha pr point karta hai usse pehle insert karta hai meaning agar 1 ko point karega ko 1 wala 2 par shift ho jaaega and khud 1 par aa jaaega toh basically aise bhi kaha jaa skta hai ki wo jaha par point kar raha tha usse ek pehle aa gaya
    //iter+1, ke baad jo 5 likha hai wo ye batata hai ki kitni copies insert karni hai jo ki by default 1 hota hai
    // display(vec1);
    return 0;
}