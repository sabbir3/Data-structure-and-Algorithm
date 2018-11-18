#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,a;

    for(i=1; i<=10; i++){
    if(i%2==0) continue;
    cout<<i<<endl;
    }
    cout<<endl;
    cout<<endl;

    for(i=1; i<=10; i++){

        if(i>3) break;
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<endl;

    while( scanf("%d",&a)!=EOF){

        if(a==0) break;
        cout<<a<<endl;
    }


    while( scanf("%d",&a)!=EOF && a){

        cout<<a<<endl;
    }

    return 0;
}
