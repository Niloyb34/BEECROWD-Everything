#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c;
    float Area;

    float Perimetro;
    cin>>a>>b>>c;
    cout<<setprecision(1);
    cout<<fixed;

    if(((a+b)>c)&&((a+c)>b)&&((b+c)>a))
    {
        Perimetro = (a+b+c);
        cout<<"Perimetro = "<<Perimetro<<endl;
    }
    else
    {
        Area=(0.5)*c*(a+b);
        cout<<"Area = "<<Area<<endl;
    }

}

