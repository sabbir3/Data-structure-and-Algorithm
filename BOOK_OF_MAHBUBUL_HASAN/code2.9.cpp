#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=100,cnt=0,i;

    while(x%2==0){

        x=x/2;
       cout<<x<<endl;
        cnt++;
    }

    cout<<endl;
    cout<<cnt;
    cout<<endl;
    cout<<endl;

    x=1;
    while(x*2<1000){

        x*=2;
        cout<<x<<endl;
    }
    cout<<endl;
    cout<<endl;

    for(x=1; x*2<1000; x*=2);

    cout<<x;

    return 0;
}
