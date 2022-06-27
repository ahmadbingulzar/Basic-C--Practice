#include <iostream>
using namespace std;
int main()
{
    unsigned int number;
    unsigned long int fact = 1;
   do{  
        cout << "Enter a number:";
        cin >> number;
        for (int j = number; j > 0; j--)
        {
          fact*= j;
        }
       
        cout << "The factorial is = " << fact << endl;
        fact=1;
    }
    while(number!=0);
    return 0;
}
