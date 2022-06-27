//calculating number of words in a sentence 
#include<iostream>
using namespace std;
int main()
{
    //it is set to 1 because it is counting spaces not words and it is missing first word
    int no_of_words=1;
    char s[]="hello poooogramers how are u";
    for(int i=0;s[i]!='\0';i++)
    {
     if(s[i]==' '&&s [i-1]!=' ')
        no_of_words++;
    }
    cout<<"Total words is = "<<no_of_words<<endl;
}