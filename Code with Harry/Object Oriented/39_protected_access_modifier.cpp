#include<iostream>
using namespace std;

class base{
    protected:
        int a;//since a is protected therefore it can be inherited in the derived class.
    private:
        int b;//since b is private hence it cannot be inherited in the derived class.

};
/*for a protected member:
                            public derivation   private derivation  protected derivation 
    1. private members          not inherited       not inherited       not inherited
    2. protected members        protected           private             protected     
    3. public members           public              private             protected
*/
class derived :protected base{

};

int main()
{
    base b;
    derived d;
    // cout<<b.a; this will not exercute as we can't access protected members of the class.
    return 0;
}