/*akta car ase jeta 1 litre use kore 12 km jete*/
/* jehuto read korte hbe spend time in hours and the same average mane hour and beg deo ase tie displacement ba sron ber korte parbo
displacement ba sron mane hlo displacement=(average speed*hour)*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main()
{
    int hours,average;
    cin>>hours>>average;
    double displacement=(hours*average)/12.0;
    /*litres need hbe--->question onugayi 12 km jete 1 liter petrol lagbe tahole
     12 km jete petrol lage   1  liter
     1 km     ...............(1/12);
     850 km  ................(1/12)*850=70.833*/

     cout<<setprecision(3);
     cout<<fixed;

    cout<<displacement<<endl;


}
