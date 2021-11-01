#include<iostream>
using namespace std;

int main(void)
{  
    const int W=20;
    const int H=20;

    for(int j=0;j<H;j++)
        {
        for(int i=0;i<W;i++)
            {
                if(j==i)
                {
                    int r=0;
                    int g=0;
                    int b=0;
                   cout<<"\x1b[48;2;"<< r << ";" << g << ";" << b << "m "<<" \x1b[0m"; 
                }
                else
                {
                int r=(j/float(W))*255;
                int g=(i/float(H))*155;
                int b=(j/float(W))*55;
                cout<<"\x1b[48;2;"<< r << ";" << g << ";" << b << "m "<<" \x1b[0m";
                }
            }
            cout<<endl;
        }   
    return 0;
}