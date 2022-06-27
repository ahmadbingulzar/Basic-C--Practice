#include <iostream>
using namespace std;
int main()
{
    int var_int;
    float var_float;

    int* ptr_int ;
    float* ptr_float;
    void* ptr_void;

    ptr_int=&var_int;
   // ptr_int=&var_float;
 //   ptr_float=&var_int;
    ptr_float=&var_float;
    
    //void is a general purpose pointer which can take all types of refrences

    ptr_void=&var_int;
    ptr_void=&var_float;
    return 0;
}