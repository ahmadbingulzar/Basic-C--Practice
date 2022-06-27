#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    cout<<"\nElements are\n";
    for (i = 0; i < arr.length; i++)
        cout<<arr.A[i];
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void insert(Array* arr,int x)
{
    int i=arr->length-1;
    while(i>=0&& arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}
bool is_sorted(Array arr)
{
    for(int i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        return false;
    }
    return true;
}
void  placing(Array* arr)
{
    int i=0;
    int j=arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0)i++;
        while(arr->A[j]>=0)j--;
        if(i<j)
        {
           swap(&arr->A[i],&arr->A[j]);
        }
    }
}
int main()
{
    struct Array arr1 = {{1,2,-10,-4,-5,6,7,8,-10}, 11, 9};
    cout<<"Rearranged array :"<<endl;
    placing(&arr1);

    // if(is_sorted(arr1)!=true)
    // {
    //     cout<<"List is not sorted :"<<endl;
    // }
    // else
    //     cout<<"List is sorted"<<endl;
    
    Display(arr1);
    return 0;
}