#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>c>>b>>d;
    if(c>d)
    {
        if(a==b)
            cout<<"O JOGO DUROU "<<24-a+b-1<<" HORA(S) E "<<60-c+d<<" MINUTO(S)"<<endl;
        else if(a>b)
            cout<<"O JOGO DUROU "<<24-a+b-1<<" HORA(S) E "<<60-c+d<<" MINUTO(S)"<<endl;
        else if(a<b)
            cout<<"O JOGO DUROU "<<b-a-1<<" HORA(S) E "<<60-c+d<<" MINUTO(S)"<<endl;
    }
    else if(c<d)
    {
        if(a==b)
            cout<<"O JOGO DUROU "<<a-b<<" HORA(S) E "<<d-c<<" MINUTO(S)"<<endl;
        else if(a>b)
            cout<<"O JOGO DUROU "<<24-a+b<<" HORA(S) E "<<d-c<<" MINUTO(S)"<<endl;
        else if(a<b)
            cout<<"O JOGO DUROU "<<b-a<<" HORA(S) E "<<d-c<<" MINUTO(S)"<<endl;
    }
    else if(c==d)
    {
       if(a==b)
       {
           cout<<"O JOGO DUROU 24 HORA(S) E "<<d-c<<" MINUTO(S)"<<endl;
       }
        else if(a>b)
       {
        cout<<"O JOGO DUROU "<<24-a+b<<" HORA(S) E "<<d-c<<" MINUTO(S)"<<endl;
       }
       else if(a<b)
       {
          cout<<"O JOGO DUROU "<<b-a<<" HORA(S) E "<<d-c<<" MINUTO(S)"<<endl;
       }

    }
    else if((a==b==c==d))
    {

        cout<<"O JOGO DUROU 24 HORA(S) E "<<d-c<<" MINUTO(S)"<<endl;
    }

}
