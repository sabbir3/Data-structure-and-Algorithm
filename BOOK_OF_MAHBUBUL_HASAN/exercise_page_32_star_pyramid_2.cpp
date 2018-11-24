#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;

    cin>>n;

    for(i=1; i<=n; i++){

         for(k=1; k<i; k++){

            cout<<" ";
         }

        for(j=n; j>=i; j--){

          cout<<"*";
        }
        cout<<"\n";

    }


    return 0;
}

