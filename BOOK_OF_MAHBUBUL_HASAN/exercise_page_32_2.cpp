#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;

   cin>>n;

   for(i=1; i<=n; i++){

        cout<<((i*(i+1)*(2*i+1))/6)<<endl;
    }
    /* return 0;

    while(scanf("%d",&n)!=EOF){


        cout<<((n*(n+1)*(2*n+1))/6)<<endl;

    }*/

    return 0;
}
