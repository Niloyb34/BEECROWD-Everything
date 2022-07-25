#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#define pie 3.14159
#include<iomanip>
using namespace std;
int main()
{
    double A,B,C;
    cin>>A>>B>>C;
    cout<<setprecision(3);
    cout<<fixed;
    cout<<"TRIANGULO: "<<(0.5*A*C)<<endl;
    cout<<"CIRCULO: "<<((pie)*pow(C,2))<<endl;
    cout<<"TRAPEZIO: "<<(0.5*(A+B)*C)<<endl;
    //0.5*SMANTORAL BAHUDOYER JOGFUL*HEIGHT
    cout<<"QUADRADO: "<<pow(B,2)<<endl;
    cout<<"RETANGULO: "<<(A*B)<<endl;//DOIRGO*PROSTO


}
