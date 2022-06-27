#include <iostream>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(Array arr)
{
    int l;
    cout << "\nElements are\n";
    for (l = 0; l < arr.length; l++)
        cout << arr.A[l] << " ";
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
Array *difference(Array *arr1, Array *arr2)
{
    int i = 0, j = 0, k = 0;
    Array *arr3 = new Array;
    while (arr1->length > i && arr2->length > j)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr1->A[i] > arr2->A[j])
            arr3->A[k++] = arr2->A[j++];

        else
        {

            j++;
            i++;
        }
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i++];
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}
int main()
{
    Array arr1 = {{19, 3, 1, 6, 8}, 10, 5};
    Array arr2 = {{11, 3, 19, 6, 8}, 10, 5};
    Array *arr3;
    arr3 = difference(&arr1, &arr2);
    Display(*arr3);

    return 0;
}