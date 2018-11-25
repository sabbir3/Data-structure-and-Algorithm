#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n;

    cin>>n;

    for(i=n; i>=1; i--){

        for(j=n; j>i; j--){

            cout<<" ";
        }
        for(k=1; k<=i; k++){

            cout<<k;
        }
        l=k-2;
        for(m=l; m>=1; m--){
            cout<<m;
        }
        cout<<"\n";
    }

    return 0;
}
