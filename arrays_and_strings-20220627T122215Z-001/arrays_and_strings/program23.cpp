#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="hello i am a pooogramer";
    int n;
    n=s1.find("am");
    cout<<" Found am at = "<<n<<endl;
    n=s1.find_first_of("at");
    cout<<"found first of 'at' at "<<n<<endl;

    n=s1.find_first_not_of("aeiouAEIOU");
    cout<<"first consonant at "<<n<<endl;
    return 0;
}
