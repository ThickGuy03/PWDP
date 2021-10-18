#include <iostream>
using namespace std;
int main()
{
int wynik=0;
for(int i=-5;i<6;i++)
{
    for(int j=-5;j<6;j++)
    {
        wynik=i*j;
        cout<< wynik<<"\t";
    }
    cout<<""<<endl;
}



return 0;
}
