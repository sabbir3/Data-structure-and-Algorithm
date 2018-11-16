#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,p,area;

    cout<<"enter three sides of triangle=";
    cin>>a>>b>>c;
    cout<<"\n";

    p=((a+b+c)/2);
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"area of triangle="<<area;

    return 0;
}
