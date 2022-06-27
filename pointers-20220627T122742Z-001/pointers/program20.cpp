//this program shows two ways of creating objects 
#include <iostream>
using namespace std;
class Distance {
private:
        int feet;
        float inches;
public:

        Distance():feet(0),inches(0.0)
        {

        }
        void get_dist()
        {
            cout<<"Enter feet :";
            cin>>feet;
            cout<<"Enter inches :";
            cin>>inches;
        }
        void show_dist()
        {
            cout<<feet<<"\'-"<<inches<<'\"';

        }
};
int main()
{
    Distance dist;
    dist.get_dist();
    dist.show_dist();
    cout<<endl;
    //another way using pointers
    Distance* dist_ptr;
    dist_ptr=new Distance;
    dist_ptr->get_dist();
    dist_ptr->show_dist();
    cout<<endl;
    return 0;
}