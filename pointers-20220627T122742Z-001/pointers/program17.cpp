#include <iostream>
using namespace std;
const int days=7;
int main()
{
    char* arrptrs[days]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};

    for(int j=0;j<days;j++)
    {
        cout<<arrptrs[j]<<endl;

    }
    return 0;
}