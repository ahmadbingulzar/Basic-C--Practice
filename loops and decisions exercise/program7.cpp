#include <iostream>
using namespace std;
int main()
{
    int pound1 = 0, shilling1 = 0, pence1 = 0, pound2 = 0, shilling2 = 0, pence2 = 0, pound = 0, shilling = 0, pence = 0;
    char choice;
    do
    {
        cout << "Enter the first amount:";
        cout << "enter pounds:";
        cin >> pound1;
        cout << "Enter shillings:";
        cin >> shilling1;
        cout << "enter pence:";
        cin >> pence1;
        cout << "Enter second amount:";
        cout << "enter pounds:";
        cin >> pound2;
        cout << "Enter shillings:";
        cin >> shilling2;
        cout << "enter pence:";
        cin >> pence2;
        pound = pound1 + pound2;
        cout << pound;
        shilling = shilling1 + shilling2;
        cout << shilling;
        pence = pence1 + pence2;
        cout << pence;
        if (pence >= 12)
        {
            shilling = shilling + 1;
            pence = 0;
            if (shilling >= 20)
            {
                pound = pound + 1;
                shilling = 0;
            }
        }
        cout << "Total amount is =" << pound << "." << shilling << "." << pence;
        cout << "want to continue [enter any key to continue/n to terminate]:";
        cin >> choice;

    } while (choice != 'n');
}