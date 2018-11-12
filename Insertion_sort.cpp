#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,pos,value;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){

        cin>>a[i];
    }
    for(i=1; i<=n-1; i++){

        value=a[i];
        pos=i;

        while(pos>0 && a[pos-1]>value){


            swap(a[pos-1],a[pos]);
            pos=pos-1;
        }

        a[pos]=value;
    }

    for(i=0; i<n; i++){

        cout<<a[i];
    }

    return 0;
}
