#include<iostream>
#include<cmath>
using namespace std;

class point;


class point{
    int x,y;
    friend int distance(point, point);
    public:
        point(int a, int b){
            x=a;
            y=b;
        }
        
};

int distance(point p, point q){

    int dist{};
    dist = sqrt(pow(p.x-q.x,2)+pow(p.y-q.y,2));
    
    return dist;
}

int main()
{
    point p(0,1);
    point q(0,6);
    cout<<"The distance between the two points is: "<<distance(p,q)<<endl;
    return 0;
}