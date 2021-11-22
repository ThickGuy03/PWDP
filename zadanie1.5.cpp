//gra w statki
#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int pGracza(int tabG[10][10])
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
    return tabG[10][10];
}
int pKomputera(int tabK[10][10])
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
    return tabK[10][10];
}
  
   int rozstawStatkiG( int tabG[10][10])
{   

    int x,y;
    cout<<"Rozstaw 3 jednoflagowce"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Podaj współrzędną x z przedziału 0-9: "<<endl;
        cin>>x;
        cout<<"Podaj współrzędną y z przedziału 0-9: "<<endl;
        cin>>y;
        while(tabG[x][y]!=0)
        {
            cout<<"Nie można tutaj postawić statku!"<<endl<<"Wpisz ponownie x[0-9] i y[0-9]"<<endl;
            cin>>x;
            cin>>y;
        }
        tabG[x][y]=1;
    }

    cout<<"rozstaw Dwa dwuflagowce ustawione , pierwszy bedzie ustawiony poziomo a drugi pionowo"<<endl;
        //pierwszy dwuflagowiec
        cout<<"Podaj współrzędną x z przedziału 0-9: "<<endl;
        cin>>x;
        cout<<"Podaj współrzędna y z przedziału od 0-8: "<<endl;
        cin>>y;
        while(tabG[x][y]!=0 || tabG[x][y+1]!=0 )
        {
            cout<<"Nie można tutaj postawić statku!"<<endl<<"Wpisz ponownie x[0-9] i y[0-8]"<<endl;
            cin>>x;
            cin>>y;
        }
        tabG[x][y]=2;
        tabG[x][y+1]=2;
        //drugi dwuflagowiec
        cout<<"Podaj współrzędną x z przedziału 0-9: "<<endl;
        cin>>x;
        cout<<"Podaj współrzędna y z przedziału od 1-9: "<<endl;
        cin>>y;
        while(tabG[x][y]!=0 || tabG[x+1][y]!=0 )
        {
            cout<<"Nie można tutaj postawić statku!"<<endl<<"Wpisz ponownie x[0-9] i y[1-9]"<<endl;
            cin>>x;
            cin>>y;
        }
        tabG[x][y]=2;
        tabG[x+1][y]=2;
    cout<<"Rozstaw trzyflagowca stworzonego z trzech pól skierowanych na północ"<<endl;
        cout<<"Podaj współrzędną x z przedziału 0-7: "<<endl;
        cin>>x;
        cout<<"Podaj współrzędna y z przedziału od 0-9: "<<endl;
        cin>>y;
        while(tabG[x][y]!=0 || tabG[x+1][y]!=0 || tabG[x+2][y]!=0)
        {
            cout<<"Nie można tutaj postawić statku!"<<endl<<"Wpisz ponownie x[0-7] i y[0-9]"<<endl;
            cin>>x;
            cin>>y;
        }
        tabG[x][y]=3;
        tabG[x+1][y]=3;
        tabG[x+2][y]=3;

    return tabG[10][10];
}
int rozstawStatkiK(int tabK[10][10])
{

    return tabK[10][10];
}

int strzalG(int tabK[10][10])
{   
    int x,y;
    bool trafienie=true;
    while(trafienie==true)
    {
        cout<<"Podaj współrzędną x z przedziału 0-9: "<<endl;
        cin>>x;
        cout<<"Podaj współrzędną y z przedziału 0-9: "<<endl;
        cin>>y;
        if(tabK[x][y]==1 || tabK[x][y]==2 || tabK[x][y]==3)
        {
            cout<<"trafiłeś statek komputera!"<<endl;
            tabK[x][y]=8;
        }
        if(tabK[x][y]==0)
        {
            cout<<"Pudło!"<<endl;
            trafienie=false;

        }
    }
    return 0;
}
int strzalK(int tabG[10][10])
{
    srand (time(NULL)); 
    bool trafienie=true;
    while(trafienie==true)
    {
        int x=rand()%10;
        int y=rand()%10;
        if(tabG[x][y]==1 || tabG[x][y]==2 || tabG[x][y]==3)
        {  
            cout<<"trafiłeś statek Gracza!"<<endl;
            tabG[x][y]=8;
        }
        if(tabG[x][y]==0)
        {
            cout<<"Pudło!"<<endl;
            tabG[x][y]=-1;
            trafienie=false;

        }
    }

    return 0;
}
int pokaz(int tabG[10][10])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<tabG[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int main()
{   
    
    bool koniec=false;
    int tabK[10][10],tabG[10][10];
    pGracza(tabG);
    cout<<endl;
    pKomputera(tabK);
    cout<<endl;
    rozstawStatkiG(tabG);
    pokaz(tabG);
    strzalK(tabG);
    cout<<endl;
    pokaz(tabG);
    
  
    

    
  
    
   
    return 0;
}