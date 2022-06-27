#include <iostream>
using namespace std;
class Array
{
private:
    int *A;
    int length;
    int size;

public:
    Array(int size) : size(size)
    {
        A = new int[size];
    }
    void create()
    {
        cout << "Enter number of elements : ";
        cin >> length;
        cout << "Enter array elements : " << flush << endl;
        for (int i = 0; i < length; i++)
        {
            cout << "Enter element number : " << i << flush << endl;
            cin >> A[i];
        }
    }
    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << "Element number : " << i << " : " << A[i] << endl;
        }
    }

    void Append(Array *arr, int x)
    {
        if (arr->length < arr->size)
            arr->A[arr->length++] = x;
    }
    void Insert(Array *arr, int index, int x)
    {
        int i;

        if (index >= 0 && index <= arr->length)
        {
            for (i = arr->length; i > index; i--)
                arr->A[i] = arr->A[i - 1];
            arr->A[index] = x;
            arr->length++;
        }
    }
    void swap(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    int Liner_search(Array *arr, int key)

    {

        for (int i = 0; i < arr->length; i++)
        {
            if (key == arr->A[i])
            {
                swap(&arr->A[i], &arr->A[0]);
                return i;
            }
        }
        return -1;
    }
    int BinarySearch(Array *arr, int key)
    {
        int l, mid, h;
        l = 0;
        h = arr->length - 1;
        while (l <= h)
        {
            mid = (l + h) / 2;
            if (key == arr->A[mid])
                return mid;
            else if (key < arr->A[mid])
                h = mid - 1;
            else
                l = mid + 1;
        }
        return -1;
    }
    int RBinSearch(int a[], int l, int h, int key)
    {

        int mid = 0;
        if (l <= h)
        {
            mid = (l + h) / 2;
            if (key == a[mid])
                return mid;
            else if (key < a[mid])
                return RBinSearch(a, l, mid - 1, key);
        }
        else
            return RBinSearch(a, mid + 1, h, key);
        return -1;
    }


    ~Array()
    {
        delete[] A;
        cout << "Array destroyed :" << endl;
    }
};

    int GET(int arr[], int index)
    {
        int arrSize = sizeof(arr[]) / sizeof(arr[0]);

        if (index >= 0 && index <= arrSize)
            return arr[index];
        return -1;
    }
    int SET(int arr[], int index, int value)
    {
        int arrSize = sizeof(arr) / sizeof(arr[0]);
        if (index >= 0 && index <= arrSize)
            return arr[index] = value;
        return -1;
    }

    int MAX(int arr[])
    {
        int arrSize = sizeof(arr) / sizeof(arr[0]);
        int max;
        for (int i = 1; i < arrSize; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }

   int MIN(int arr[])
    {
        int arrSize = sizeof(arr) / sizeof(arr[0]);
        int min;
        for (int i = 1; i < arrSize; i++)
        {
            if (arr[i] > min)
            {
                min = arr[i];
            }
        }
        return min;
    }
int SUM(int arr[])
{
    int sum=0;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<arrSize;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
float AVG(int arr[])
{
    int arrSize = sizeof(arr) / sizeof(arr[0]);
     return (float)SUM(arr)/arrSize;
}
int main()
{
    Array arr(10);
    int arr1[5] = {5, 4, 3, 163, 1};
    cout<<"SUM is = "<<SUM(arr1);
    arr.display();
    return 0;
}