#include<iostream>
#include<cstring>
using namespace std;

class cwh{
    protected:
        string title;
        float rating;
    public:
        cwh(string s, float r){
            title = s;//will copy the string s in string+
            rating = r;
        }
        virtual void display(){
            cout<<"cwh display function has been called";
        }
};

class cwhvideo: public cwh{
    float videolength;
    public:
        cwhvideo(string s, float r, float vl): cwh(s,r){
            videolength = vl;
        }
        void display(){
            cout<<"this is an amazing video with title "<<title<<endl;
            cout<<"this video has rating "<<rating<<" out of 5 stars"<<endl;
            cout<<"length of this video is "<<videolength<<" minutes"<<endl;
        }

};
class cwhtext: public cwh{
    int words;
    public:
        cwhtext(string s, float r, int wc): cwh(s,r){
            words = wc;
        }
        void display(){
            cout<<"this is an amazing text tutotial with title "<<title<<endl;
            cout<<"Rating of this text tutorial  "<<rating<<" out of 5 stars"<<endl;
            cout<<"No of words in this text tutorial is "<<words<<" words"<<endl;
        }

};

int main()
{
    string title;
    float rating, vlen;
    int words;
    //for code with harry video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;

    cwhvideo djvideo(title, rating, vlen);
    // djvideo.display();

    // for code with harry text
    title = "Django tutorial text";
    words = 433;
    rating = 4.19;

    cwhtext djtext(title, rating, words);
    // djtext.display();
    cwh dj(title, 5);

    cwh* tuts[3];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;
    tuts[2] = &dj;

    tuts[0]->display();
    tuts[1]->display();//agar maan lo compiler ko cwhtext class mei display function nahi milta toh wo automatically base class that cwh ka display function call kar lega
    tuts[2]->display();
    return 0;
}

/*
RULES FOR VIRTUAL FUNCTIONS
1. they cannot be static
2. they are accessed by object pointers 
3. virtual functions can be a friend of another class
4. a virtual function in base class might not be used
5. IF a virtual function defined in the base class, there is no necessity  of redifining it in the derived class
*/