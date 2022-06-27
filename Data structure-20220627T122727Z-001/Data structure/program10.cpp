#include<iostream>
using namespace std;
class A{
    public:
    void  display(){
        cout<<"a"<<endl;
    }
};
class B:public virtual A{
        public:


void print(){
            cout<<"b"<<endl;

}
};
class C:public virtual A{
      public:

    void shoot()
    {
                cout<<"c"<<endl;

    }

};
class D:public B,public C{
    public:

    void ok()
    {
                cout<<"d"<<endl;

    }
 void display()
    { 
        cout<<"hello bro d here"<<endl;
}
};
int main()
{
    D obj;
    obj.display();

}