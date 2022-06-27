#include<iostream>
using namespace std;
class Distance {
    private:
            int feet;
            float inches;
    
    public:
            void getdis()
            {
                cout<<"Enter feet = ";
                cin>>feet;
                cout<<"Enter inches = ";
                cin>>inches;
            }
            void showdis()
            {
                cout<<"feet = "<<feet<<"\'-"<<" || inches = "<<inches<<'\"';
            }
};
int main()
{
    Distance dist[100];
    int n=0;
    char ans;
    cout<<endl;

    do{ 
        cout<<"Enter distance number "<<n+1;
        dist[n++].getdis();
        cout<<"Enter another (y/n)?:";
        cin>>ans;
    }while(ans!='n');
    
    //display all distance 
    for(int j=0;j<n;j++)
    {
        cout<<"Distance number "<<j+1<<" is ";
        dist[j].showdis();
    }
    cout<<endl;
    return 0;
}