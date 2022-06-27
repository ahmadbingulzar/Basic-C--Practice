// Fast method to find missing element in an array
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
    int length = arr1->length;
    Array *Hash_array = new Array[17];

    for (int i = 0; i < 17; i++)
    {
        int j = arr1->A[i];
        if (j > 0)
        {
            Hash_array->A[j] = 1;
        }
    }

    for (int i = 0; i < arr1->length; i++)
    {
        cout << Hash_array->A[i] << endl;

        // if(Hash_array->A[i]==0)
        // {
        //     cout<<"Missing values are :"<<i<<endl;
        // }
    }
}
int main()
{
    Array arr1 = {{6, 7, 8, 9, 11, 12, 14, 15, 17}, 11, 9};
    missing(&arr1);
    return 0;
}