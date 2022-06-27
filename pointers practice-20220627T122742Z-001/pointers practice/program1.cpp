#include<iostream>
using namespace std;
int main(){
 
    int * fist_pointer=new int [5];


for(int i=0;i<=5;i++){
    cout<<"enter value of array at index"<<i<<endl;
    cin>>*(fist_pointer+i);
}
for(int i=0;i<=5;i++)
{
    cout<<"_______this is output"<<endl;
    cout<<fist_pointer+i<<endl;
    cout<<*(fist_pointer+i);
}


    //where & is the address of operator 
    //and * is the dereference of operator 


}
