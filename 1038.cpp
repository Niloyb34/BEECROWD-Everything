#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int X,Y;
    cin>>X>>Y;
    float price;
    cout<<setprecision(2);
    cout<<fixed;
    switch(X)
    {
    case 1 :
        price=(Y*(4.00));
        cout<<"Total: R$ "<<price<<endl;
        break;
    case 2 :
        price=(Y*(4.50));
        cout<<"Total: R$ "<<price<<endl;
        break;
    case 3 :
        price=(Y*(5.00));
        cout<<"Total: R$ "<<price<<endl;
        break;
    case 4 :
        price=(Y*(2.00));
        cout<<"Total: R$ "<<price<<endl;
        break;
    case 5 :
        price=(Y*(1.50));
        cout<<"Total: R$ "<<price<<endl;
        break;
    }
}
