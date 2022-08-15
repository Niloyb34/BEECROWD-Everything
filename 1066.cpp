#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int a,i;
    int e=0,o=0,p=0,n=0;
    for(i=0; i<5; i++)
    {
        cin>>a;

        if(a%2==0)//aikane akta snkha akoi sathe positive and even/odd duitie hote pare tie if else use korci

            e++;

        else o++;
        if(a>0)

            p++;

        else if(a<0)

            n++;

    }
    cout<<e <<" valor(es) par(es)"<<endl;
    cout<<o <<" valor(es) impar(es)"<<endl;
    cout<<p <<" valor(es) positivo(s)"<<endl;
    cout<<n <<" valor(es) negativo(s)"<<endl;


}


