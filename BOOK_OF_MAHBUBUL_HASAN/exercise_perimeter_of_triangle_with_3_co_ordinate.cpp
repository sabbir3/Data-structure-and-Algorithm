/*

@Author :Sabbir Ahmed

let a triangle ad three co-ordinate,

                   a(x,y)




        b(x,y)                   c(x,y)

        the area of triangle would be=1/2*|ax(by-cy)+bx(cy-ay)+cx(ay-cy)|

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double ax,bx,cx,ay,by,cy,area;
    cout<<"Enter a(x)=";
    cin>>ax;
    cout<<"Enter b(x)=";
    cin>>bx;
    cout<<"Enter c(x)=";
    cin>>cx;
    cout<<"Enter a(y)=";
    cin>>ay;
    cout<<"Enter b(y)=";
    cin>>by;
    cout<<"Enter c(y)=";
    cin>>cy;
    area=.5*abs(ax*(by-cy)+bx*(cy-ay)+cx*(ay-by));

    cout<<"the area of triangle is="<<area;

    return 0;
}
