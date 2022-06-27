#include <iostream>
using namespace std;
int main()
{
    void bsort(int*,int);   //prototype
    const int N=5;

    int arr[N]={5,4,3,2,1};
    bsort(arr,N);

    //to print sorted array

    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}
void bsort(int* ptr,int n)
{
    void order(int*,int*) ;             //prototype
    int j,k;

    for(j=0;j<n-1;j++)
        for(k=j+1;k<n;k++)
            order(ptr+j,ptr+k);

}
void order(int* num1,int * num2)
{
    if(*num1>*num2)
    {
        int temp=*num1;
        *num1=*num2;
        *num2=temp;
    }
}