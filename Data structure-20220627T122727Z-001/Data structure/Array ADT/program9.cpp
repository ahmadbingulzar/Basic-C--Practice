//this program finds the missing element in an array
#include <iostream>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
void missing(Array *arr1)
{
    int diff=arr1->A[0];
  
    for(int i=0;i<arr1->length;i++)
    {
        if(arr1->A[i]-i!=diff){ 
            while(diff<arr1->A[i]-i)
            { 

                cout<<diff<<endl;
                cout<<"i : "<<i<<endl;
        cout<<"Missing element is = "<<i+diff<<endl;
        cout<<diff<<endl;
        diff++;
            }
        }
    }
}
int main()
{
    Array arr1 = {{6,7,8,9,11,12,14,15,17}, 10, 9};
    missing(&arr1);
    return 0;
}