#include <iostream>
using namespace std;
int main()
{
    void customize(double&);

    double var=10.0;
    customize(var);
    cout<<"var = "<<var<<" inches "<<endl;
    return 0;

}
void customize(double &v)
{
    v*=2.54;
}