#include <iostream>
#include<unistd.h>
using namespace std;

int main()
{ 
    int liczba=3;
    int silnia=1;
    for(int i=1;i<=liczba;i++)
    {
        silnia*=i;
        cout<<silnia<<endl;
        liczba++;
        usleep(5000);
    }
    return 0;
    //najwikesza wartość silni jest dla i=12 ponieważ później wychodzimy poza zakres inta
}