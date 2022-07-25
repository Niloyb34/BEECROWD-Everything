#include<iostream>
#include<iomanip>//standard input output manipulation
using namespace std;
int main()
{
 int num,wh;
 float arph;
 cin>>num>>wh>>arph;
 //akon mashe 100 hours kaj korle then per hour jdi 5.50 taka hoi then masik bill (5.50*100)=550 taka asbe
 float salary=(wh*arph);

 cout<<"NUMBER"<<" "<<"="<<" "<<num<<endl;
 cout<<showpoint;
 cout<<fixed;
 cout<<setprecision(2);//jehoto fixed use korci tie dsomik er pore 2 ghor thakbe
 cout<<"SALARY = U$ "<<salary<<endl;

}
