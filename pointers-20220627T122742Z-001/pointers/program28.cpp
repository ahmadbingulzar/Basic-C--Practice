#include <iostream>
using namespace std;
class A{
    public:
            C hello;
            A()
            {
                cout<<"hellow i am constructor of a"<<endl;

            }
};
class B{
    public:
            B(){
                cout<<"hellow i am constructor of b"<<endl;
            }
};
class C{
    public:
            C(){
                cout<<"hellow i am constructor of c"<<endl;
            }
};
int main()
{
    C hello;
    
}
