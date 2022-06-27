#include<iostream>
using namespace std;
const int size=4;
struct part{
    int model_number;
    int part_number;
    float cost;
};
int main()
{
    int n;
    part apart[size];
    
    for(n=0;n<size;n++)
    {
        cout<<"Enter model number : ";
        cin>>apart[n].model_number;
        cout<<"Enter part number : ";
        cin>>apart[n].part_number;
        cout<<"Enter cost : ";
        cin>>apart[n].cost;
    }
    cout<<endl;

    for(n=0;n<size;n++)
    {
        cout<<"Model number is = "<<apart[n].model_number<<endl;
        cout<<"part number is  = "<<apart[n].part_number<<endl;
        cout<<"cost is         = "<<apart[n].cost<<endl;
    }
}