#include<iostream>
using namespace std;
int main()
{
    int n,n100,n50,n20,n10,n5,n2,n1;
    cin>>n;
    cout<<n<<endl;
    n100=(n/100);//5

    cout<<n100<<" nota(s) de R$ 100,00"<<endl;
    n50=(n%100)/50;//1

    cout<<n50<<" nota(s) de R$ 50,00"<<endl;

    n20=((n%100)%50)/20;//1

    cout<<n20<<" nota(s) de R$ 20,00"<<endl;

    n10=(((n%100)%50)%20)/10;//0
    cout<<n10<<" nota(s) de R$ 10,00"<<endl;

    n5=(((n%100)%50)%20)/5;
    cout<<n5<<" nota(s) de R$ 5,00"<<endl;


    n2=((((n%100)%50)%20)%5)/2;
     cout<<n2<<" nota(s) de R$ 2,00"<<endl;



    n1=(((((n%100)%50)%20)%5)%2)/1;
    cout<<n1<<" nota(s) de R$ 1,00"<<endl;
    return 0;

}

