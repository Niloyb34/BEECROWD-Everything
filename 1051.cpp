#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    float num;
    cin>>num;
    cout<<setprecision(2);
    cout<<fixed;
    if((num>=0.00)&&(num<=2000.00))
        cout<<"Isento"<<endl;
    else if((num>=2000.01)&&(num<=3000.00))
        cout<<"R$ "<<((num-2000.00)*(8.0/100))<<endl;
    else if((num>=3000.01)&&(num<=4500.00))
        cout<<"R$ "<<(((num-3000)*(18.0/100))+(1000*0.08))<<endl;
    else if(num>4500)
        cout<<"R$ "<<(((num-4500)*(0.28))+(1000*0.08)+(1500*0.18))<<endl;

}

