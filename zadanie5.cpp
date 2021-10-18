#include<iostream>
#include <string>
using namespace std;
int main()
{
    for(int i=40;i<48;i++)
    {
    cout<<"\x1b["<<i<<"m cześć"<<'\t';
    }
    
    
    return 0;
}