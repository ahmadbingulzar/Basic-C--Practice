#include <iostream>
#include <cstring>
using namespace std;
class String {
private:
        char * str;

public:
        String(char *s)
        {
           
            int length=strlen(s);
            str=new char[length+1];
            strcpy(str,s);
            
        }
        ~String()
        {
            delete[]str;
        }
       
        void display()
        {
            cout<<str<<endl;
        }
};
int main()
{
    String s1="who knows nothing doubts nothing";
    cout<<"s1 = ";
    s1.display();
    return 0;
}