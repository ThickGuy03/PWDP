#include <iostream>
using namespace std;
int kalkulator()
{
    int x,x1,x2,wynik;
    char wyjscie='a';

         cout<<"Podaj działanie [0-dodawanie|1-mnożenie]"<<endl;
        cin>>x;
        if(x==0)
        {
            cout<<"Podaj pierwsza liczbe "<<endl;
            cin>>x1;
            cout<<"Podaj drugą liczbe "<<endl;
            cin>>x2;
            wynik=x1+x2;
            cout<<"Wynik dodawania to: "<<wynik<<endl; 
            wynik=0;
        }
        if(x==1)
        {
            cout<<"Podaj pierwsza liczbe "<<endl;
            cin>>x1;
            cout<<"Podaj drugą liczbe "<<endl;
            cin>>x2;
            wynik=x1*x2;
            cout<<"Wynik mnożenia to: "<<wynik<<endl;
            wynik=0;
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
        else kalkulator();
    return 0;    
}
int main()
{
    kalkulator();   

    return 0;
}