#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    float media=((2*a)+(3*b)+(5*c))/(2+3+5);

    //cout<<showpoint;//ata use korle dsomiker age and pore mile 6 ghor dekabe
    cout<<fixed;
    cout<<setprecision(1);//jehuto setprecision dsomiker age and pore mile kto ghor thakbe ta decide korbe

    //fixed use korle tkon only dsomiker pore ktpo ghor thakbe ta buja jie

    cout<<"MEDIA = "<<media<<endl;
}
