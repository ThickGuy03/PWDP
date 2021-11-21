//gra w statki
#include <iostream>
using namespace std;

void pGracza(int tabG[10][10])
{
    for(int i=0;i<10;i++)
    {   
        for(int j=0;j<10;j++)
        {
           tabG[i][j]=0;
           cout<<tabG[i][j]<<" ";
        }
        cout<<endl;
    }
}
void pKomputera(int tabK[10][10])
{   
    
    for(int i=0;i<10;i++)
    {   
        for(int j=0;j<10;j++)
        {
           tabK[i][j]=0;
           cout<<tabK[i][j]<<" ";
        }
        cout<<endl;
    }
}
int rozstawStatki( int tab)
{   
    bool trafienie;

    return 0;
}
int strzalG(int x, int y)
{
    return 0;
}

int main()
{   
    bool koniec;
    int tabK[10][10],tabG[10][10];
    pGracza(tabG);
    cout<<endl;
    pKomputera(tabK);
    while(koniec==false)
    {

    }
   
    return 0;
}