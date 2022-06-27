//calculating vowels and consonants
#include<iostream>
using namespace std;
int main(){ 
    char s[]="welcome";
    int v_count=0;
    int c_count=0;
    for(int i=0;s[i]!='\0';i++){ 
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='u'||s[i]=='I')
        {
            v_count++;
            
        }        
        else if(s[i]>=65&&s[i]<=97 ||s[i]>=97&&s[i]<=122)
        {
            c_count++;
        }
    }
    cout<<"vowels = "<<v_count<<endl<<"cosonants = "<<c_count<<endl;
    return 0;
}