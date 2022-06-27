#include<iostream>
using namespace std;
class Employee{
    private:
            string name;
            long    employee_number;

    public:
        void set_data()
        {
            cout<<"Enter employee name : ";
            cin>>name;
            cout<<"Enter employee number = ";
            cin>>employee_number;
            cout<<endl;
        }
        void display()
        {
            cout<<"Employee name is : "<<name<<endl;
            cout<<"Employee number is = "<<employee_number<<endl;
        }
};
int main()
{
    Employee emp_array[100];
    string choice;
    int i=0;


    do{
        cout<<"Enter your employees details"<<endl;
        
        emp_array[i+1].set_data();
        cout<<"Enter y to add more and n for exit "<<endl;
        cin>>choice;
        i++;

    }while(choice!="n");
    cout<<"Employees details"<<endl;
    for(int j=0;j<i;j++)
    {
        emp_array[j].display();
        cout<<endl;
    }
}