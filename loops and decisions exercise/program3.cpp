/*program performs arithemetic operations only(+,-,*,/).it uses four functions one for each arithimetic operation*/
#include <iostream>
using namespace std;
//this function is used for addition between two values
int addition(int num1, int num2)
{
    return num1 + num2;
}
//this function is used for multiplication between two values
int multiplication(int num1, int num2)
{
    return num1 * num2;
}
//this function is used for subtraction between two values
int subtraction(int num1, int num2)
{
    return num1 - num2;
}
//this function is used for division between two values
int division(int num1, int num2)
{
    if (num2 == 0)
    {
        cout << "Math Error" << endl;
        return 0;
    }
    else
    {
        return num1 / num2;
    }
}
//Main Function it is the start of the program control always starts from the main function
int main()
{
    int num1, num2;
    char sign, choice;

    do
        {
            cout << "enter the first value " << endl;

            while (!(cin >> num1)) //exception to enter only number for num1
            {
                cout << "ERROR: a number must be entered: ";
                cin.clear();
                cin.ignore(132, '\n');
            }

            cout << "enter the second value " << endl;

            while (!(cin >> num2)) //exception to enter only number for num2
            {
                cout << "ERROR: a number must be entered: ";
                cin.clear();
                cin.ignore(132, '\n');
            }
            cout << "Enter the sign (+,-,*,/) = ";
            cin >> sign;

            //functions calling for all functions
            switch(sign){ 
            case  '+':
            
                cout << "Answer = " << addition(num1, num2) << endl;
                cout<<"Do another[y/n]";
                cin>>choice;
                break;
            
            case '*':
            
                cout << "Answer = " << multiplication(num1, num2) << endl;
                cout<<"Do another[y/n]";
                cin>>choice;
                break;
            
            case '-':
            
                cout << "Answer = " << subtraction(num1, num2) << endl;
                cout<<"Do another[y/n]";
                cin>>choice;
                break;
            
            case '/':
            
                cout << "Answer =" << division(num1, num2) << endl;
                cout<<"Do another[y/n]";
                cin>>choice;
                break;
            }
        }
        while(choice!='n');
    }

