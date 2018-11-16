#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x1,x2,y1,y2,distance;

    cout<<"enter co-ordinate:"<<"\n";
    cout<<"enter x1=";cin>>x1;cout<<"\n";
    cout<<"enter x2=";cin>>x2;cout<<"\n";
    cout<<"enter y1=";cin>>y1;cout<<"\n";
    cout<<"enter y2=";cin>>y2;cout<<"\n";

    distance=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y2));

    cout<<"the distance is="<<distance;

    return 0;
}
