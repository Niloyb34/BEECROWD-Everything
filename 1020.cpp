#include<iostream>
using namespace std;
int main()
{
    int d;
    cin>>d;
    int year=(d/365);
    int month=(d%365)/30;
    int e=(d%365)%30;
    int days=e;
    cout<<year<<" "<<"ano(s)"<<endl;
    cout<<month<<" "<<"mes(es)"<<endl;
    cout<<days<<" "<<"dia(s)"<<endl;

}
