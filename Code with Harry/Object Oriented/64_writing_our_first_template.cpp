#include <iostream>
using namespace std;
 
template<class T>

class vector
{
    public:
        T *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new T[size];
        }
    T dotProduct(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
 
int main()
{
    // vector <int>v1(3); //vector 1
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // vector <int>v2(3); //vector 2
    // v2.arr[0]=1;
    // v2.arr[1]=0;
    // v2.arr[2]=1;
    // int a = v1.dotProduct(v2);
    // cout<<a<<endl;
    
    vector <float>v1(3); //vector 1
    v1.arr[0] = 4.5;
    v1.arr[1] = 3.8;
    v1.arr[2] = 1.7;
    vector <float>v2(3); //vector 2
    v2.arr[0]=1.8;
    v2.arr[1]=0.99;
    v2.arr[2]=1.01;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}
