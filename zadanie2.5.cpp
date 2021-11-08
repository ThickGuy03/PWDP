#include <iostream>
using namespace std;
float readHeight()
{   
    float height=0.0;
    cout<<"Wpisz swój wzrost w metrach"<<endl;
    cin>>height;
    return height;
}
int readMass()
{
    float kg;
    cout<<"Wpisz swoją wagę w kilogramach"<<endl;
    cin>>kg;
    return int(kg);
}
int BMI(float a,int b)
{
    float wynik;
    wynik=b/(a*a);
    return int(wynik);
}
int BMIprint(int a)
{
    cout<<"Twoje BMI wynosi "<<a<<endl;
    return 0;
}
int main()
{
    BMIprint(BMI(readHeight(),readMass()));
    return 0;   
}
