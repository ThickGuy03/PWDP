#include <iostream>
#include <math.h>
using namespace std;
void Dodawanie()
{
    float wynik,x1,x2;
    cout<<"Podaj pierwsza liczbe "<<endl;
    cin>>x1;
    cout<<"Podaj drugą liczbe "<<endl;
    cin>>x2;
    wynik=x1+x2;
    cout<<"Wynik dodawania to: "<<wynik<<endl; 
    wynik=0;
}
void Mnożenie()
{
    float wynik,x1,x2;
    cout<<"Podaj pierwsza liczbe "<<endl;
    cin>>x1;
    cout<<"Podaj drugą liczbe "<<endl;
    cin>>x2;
    wynik=x1*x2;
    cout<<"Wynik mnożenia to: "<<wynik<<endl;
    wynik=0;
}
void Odejmowanie()
{
    float wynik,x1,x2;
    cout<<"Podaj pierwsza liczbe "<<endl;
    cin>>x1;
    cout<<"Podaj drugą liczbe "<<endl;
    cin>>x2;
    wynik=x1-x2;
    cout<<"Wynik Odejmowania to: "<<wynik<<endl;
    wynik=0;
}
void Dzielenie()
{
    float wynik,x1,x2;
    cout<<"Podaj pierwsza liczbe "<<endl;
    cin>>x1;
    cout<<"Podaj drugą liczbe "<<endl;
    cin>>x2;
    wynik=x1/x2;
    cout<<"Wynik dzielenia to: "<<wynik<<endl;
    wynik=0;
}
void Pierwiastek()
{
    float wynik,x1,x2;
    cout<<"Podaj Liczbe do spierwiastkowania "<<endl;
    cin>>x1;
    wynik=sqrt(x1);
    cout<<"Wynik pierwiastkowania to: "<<wynik<<endl;
    wynik=0;
}
void Potegowanie()
{
    float wynik=1,x1,x2;
    cout<<"Podaj liczbe potęgowaną "<<endl;
    cin>>x1;
    cout<<"Podaj potęge "<<endl;
    cin>>x2;
    for(int i=1;i<=x2;i++)
    {
        wynik*=x1;
    }
    cout<<"Wynik potegowania to: "<<wynik<<endl;
}
int kalkulator()
{
    float x,x1,x2,wynik;
    char wyjscie='a';

         cout<<"Podaj działanie [0-dodawanie|1-mnożenie|2-Odejmowanie|3-Dzielenie|4-Pierwiastkowanie|5-Potęgowanie]"<<endl;
        cin>>x;
        if(x==0)
        {
            Dodawanie();
        }
        if(x==1)
        {
            Mnożenie();
        }
        if(x==2)
        {
            Odejmowanie();
        }
        if(x==3)
        {
            Dzielenie();
        }
        if(x==4)
        {
            Pierwiastek();
        }
        if(x==5)
        {
            Potegowanie();
        }
        else
        {
            cout<<"Niestety nie mam zaprogramowanej takiej funkcji"<<endl;
        }
        cout<<"Chcesz wykonać inne działanie?   [T-tak|N-nie]"<<endl;
        cin>>wyjscie;
        if(wyjscie=='n'|| wyjscie=='N')
        {
            return 0;
        }
        else 
        {
            cout<<"\x1b[2J"<<endl;
            kalkulator();
        }
    return 0;    
}

int main()
{
    kalkulator();   

    return 0;
}
