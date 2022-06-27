#include<iostream>
#include<string>
using namespace std;

int main()
{
    char charray[80];
    string word;

    cout<<"Enter a word: ";
    cin>>word;
    int wlen =word.length();

    cout<<"one character at a time :";
    for(int j=0;j<wlen;j++)
    cout<<word.at(j);
    //cout<<word[j];
    word.copy(charray,wlen,0);
    charray[wlen]=0;
    cout<<"Array contains: "<<charray<<endl;
    return 0;
}