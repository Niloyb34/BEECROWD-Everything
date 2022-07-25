#include<bits/stdc++.h>
/*#include<bits/stdc++.h ata use korle ar kono header file lage na mane setprecision er
jnno je header file #include<iomanip> seta lage na and main header file
#include<iostream> ata lagbe na */


using namespace std;
int main()
{
    int code1,nup1;
    float pop1;
   // cin>>code1>>nup1>>pop1;
    int code2,nup2;
    float pop2;
   // cin>>code2>>nup2>>pop2;


   cin>>code1>>nup1>>pop1>>code2>>nup2>>pop2;

    cout<<setprecision(2);
    cout<<fixed;

    float valuetopay=((nup1*pop1)+(nup2*pop2));
    cout<<"VALOR A PAGAR: R$ "<<valuetopay<<endl;
}
