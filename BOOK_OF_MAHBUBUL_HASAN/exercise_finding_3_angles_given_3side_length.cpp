/*

Author: Sabbir Ahmed

let length of AB=c
    length of AC=b
    length of BC=a

    angle A=cos^-1((b*b+c*c-a*a)/(2*b*c))
    angle B=cos^-1((c*c+a*a-b*b)/(2*a*c))
    angle C=cos^-1((b*b+a*a-c*c)/(2*a*b))
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double A,B,C,a,b,c,to,A_degree,B_degree,C_degree;

    cout<<"enter length of AB=";cin>>c;cout<<"\n";
    cout<<"enter length of AC=";cin>>b;cout<<"\n";
    cout<<"enter length of BC=";cin>>a;cout<<"\n";

    A=acos((b*b+c*c-a*a)/(2*b*c));
    B=acos((c*c+a*a-b*b)/(2*a*c));
    C=acos((b*b+a*a-c*c)/(2*a*b));

    A_degree=((A*180)/M_PI);
    B_degree=((B*180)/M_PI);
    C_degree=((C*180)/M_PI);


    cout<<"angel of A="<<A_degree<<"\n";
    cout<<"angel of B="<<B_degree<<"\n";
    cout<<"angel of C="<<C_degree<<"\n";

    return 0;

}
