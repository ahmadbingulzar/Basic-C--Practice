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
    Distance& dist=*(new Distance);
    dist.get_dist();
    dist.show_dist();
    cout<<endl;
    return 0;
}