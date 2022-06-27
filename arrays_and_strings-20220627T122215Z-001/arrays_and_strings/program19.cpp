#include<iostream>
#include<cstring>
using namespace std;

class part
{
    char part_name[30];
    int part_number;
    double cost;

public:
        void set_part(char pname[],int pn,double c)
        {
            strcpy(part_name,pname);
            part_number=pn;
            cost=c;
        }
        void show_part()
        {
            cout<<"Name  = "<<part_name<<endl;
            cout<<"Number = "<<part_number<<endl;
            cout<<"cost = $"<<cost<<endl;
        }
};
int main()
{
    part part1,part2;
    part1.set_part("hello g",5555,217.55);
    part2.set_part("yes bro",8888,66.55);
    cout<<"First part : ";part1.show_part();
    cout<<endl;
    cout<<"Second part : ";part2.show_part();
    return 0;
}