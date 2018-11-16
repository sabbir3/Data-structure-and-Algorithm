#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter a=";
    cin>>a;cout<<"\n";
    cout<<"enter b=";
    cin>>b;cout<<"\n";
    cout<<"enter c=";
    cin>>c;cout<<"\n";


    if(a>b && a>c && b>c){
        cout<<"the descending sequence of number is="<<a<<","<<b<<","<<c<<"\n";
    }
    else if(a>b && a>c && c>b){
        cout<<"the descending sequence of number is="<<a<<","<<c<<","<<b<<"\n";
    }
    else if(b>c && b>a && a>c ){
        cout<<"the descending sequence of number is="<<b<<","<<a<<","<<c<<"\n";
    }
    else if(b>c && b>a && c>a ){
        cout<<"the descending sequence of number is="<<b<<","<<c<<","<<a<<"\n";
    }
    else if(c>a && c>b && a>b ){
        cout<<"the descending sequence of number is="<<c<<","<<a<<","<<b<<"\n";
    }
    else if(c>a && c>b && b>a ){
        cout<<"the descending sequence of number is="<<c<<","<<b<<","<<a<<"\n";
    }
    return 0;
}

