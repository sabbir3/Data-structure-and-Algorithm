#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;

    for(i=1; i<=n; i++){

     for(int k=n; k>i;  k--){

            cout<<" ";
        }

        for(j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}

