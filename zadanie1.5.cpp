//gra w statki
#include <iostream>
using namespace std;



int main()
{
    int tab[11][11];
    for(int i=0;i<11;i++)
    {   
        if(i==0)
        {   
            tab[0][0]=0;
            for(int j=1;j<11;j++)
            {
                int a=1;
                tab[0][j]=a;
                a++;
            }
        }
        else
        for(int j=0;j<11;j++)
        {
           tab[i][j]=0;
           cout<<tab[i][j];
        }
        cout<<endl;
    }
   
    return 0;
}