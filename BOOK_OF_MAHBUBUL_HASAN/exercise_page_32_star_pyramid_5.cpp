#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,k;
    cin>>n;

    for(i=1; i<=n; i++){

     for( k=n; k>i;  k--){

            cout<<" ";
        }

        for(j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<"\n";
    }


    for(i=n-1; i>=1; i--){

     for( k=n; k>i;  k--){

            cout<<" ";
        }

        for(j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}


