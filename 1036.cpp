#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,R1,R2;
    cin>>a>>b>>c;

    R1=(-b+sqrt((pow(b,2))-(4*a*c)))/(2*a);
    R2=(-b-sqrt((pow(b,2))-(4*a*c)))/(2*a);

    if((a==(0.0))||((pow(b,2)-4*a*c)<0))
    {
        cout<<"Impossivel calcular"<<endl;

    }


    else
    {
        cout<<setprecision(5);
        cout<<fixed;
        cout<<"R1 = "<<R1<<endl;
        cout<<"R2 = "<<R2<<endl;
    }




}
