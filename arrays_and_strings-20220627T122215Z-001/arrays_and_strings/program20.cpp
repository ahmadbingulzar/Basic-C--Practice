#include<iostream>
#include<cstring>
using namespace std;
class String 
{
    private:
            enum{sz=80};
            char str[sz];
    public:
            String()
            {
                str[0]='\0';
            }
            String(char s[])
            {
                strcpy(str,s);
            }
            void display()
            {
                cout<<str;
            }
            void concat(String s2)
            {
                if(strlen(str)+strlen(s2.str)<sz)
                {
                    strcat(str,s2.str);
                }
                else
                    cout<<"String too long";
            }
};
int main()
{
    String s1("eid mubarak!");
    String s2("thank you!");
    String s3;

    cout<<"s1 = ";s1.display();
    cout<<endl;
    cout<<"s2 =";s2.display();
    cout<<endl;
    cout<<"s3 = ";s3.display();
    cout<<endl;

    s3=s1;
    cout<<"s3 = ";s3.display();
    cout<<endl;

    s3.concat(s2);
    cout<<endl;
    cout<<"s3 = ";s3.display();
    cout<<endl;
    return 0;
}
