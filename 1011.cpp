#include<iostream>
#define pie 3.14159
#include<iomanip>
#include<math.h>//always double and long long int nia kaj kora valo
using namespace std;
int main()
{
    double R;
    cin>>R;
    double volume=((double)4/3)*(pie)*pow(R,3);
    //double volume=(4/3.0)*(pie)*pow(R,3);
    //cout<<showpoint;

    cout<<setprecision(3);
    cout<<fixed;

    cout<<"VOLUME ="<<" "<<volume<<endl;
}

