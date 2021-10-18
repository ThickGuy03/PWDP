#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main()
{
    fstream plik;
    plik.open("plik.txt",ios::out);
    
    for(float x=0;x<6.29;x=x+0.01)
    {
        plik<<x<<"\t"<<cos(x)<<"\t"<< x*x <<"\t"<<endl;
    }
    plik.close();
    return 0; 
}