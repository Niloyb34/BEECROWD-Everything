#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x;
    double y;
    cin>>x>>y;
    double s=(x/y);
    cout<<setprecision(3);
    cout<<fixed;
    cout<<s<<" "<<"km/l"<<endl;

}
