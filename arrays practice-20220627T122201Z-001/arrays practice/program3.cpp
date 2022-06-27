#include<iostream>
using namespace std;

int display(int sales[],int retail[]){ 

int i=0;

 cout << "\n User Input Values\n";
   for (i = 0; i < 12; i++) {
      // Accessing sales value using for loop
      cout << "Position : " << i << " , Sales Value : " << sales[i] << " \n";
   }
}
int main() {
   // declaring sales array in C
   int sales[12];
   int retail[12];

   int i; // Variable for access sales array index
   cout << "Read User Input into Array In C++ Example Program\n";

   for (i = 0; i < 12; i++) {
      // Reading User Input sales value Based on index
      cout << "Enter Value for Position " << i << " : ";
      cin >> sales[i];
   }
     for (i = 0; i < 12; i++) {
      // Reading User Input sales value Based on index
      cout << "Enter Value for Position " << i << " : ";
      cin >> retail[i];
   }
    display(sales[i],retail[i]);

}