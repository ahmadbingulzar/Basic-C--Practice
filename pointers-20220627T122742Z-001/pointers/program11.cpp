#include <iostream>
using namespace std;
const int Max=5;

int main()
{
    void centimize(double*); //prototype

    double vararray[Max]={31.1,32.2,33.3,34.4,35.5};

    centimize(vararray);

    for(int i=0;i<Max;i++)
    {
        cout<<"vararray["<<i<<"]="
            <<vararray[i]<<"centimeters"<<endl;

        
    }return 0;

}
void centimize(double * ptrd)
{
    for(int i=0;i<Max;i++)
    {
        *ptrd++ *=2.54;
    }
}