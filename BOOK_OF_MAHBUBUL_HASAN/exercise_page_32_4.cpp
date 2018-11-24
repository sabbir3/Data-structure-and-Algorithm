#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,count=1,sum=0;

    cin>>n;

    for(i=1; i<=n; i++){

        for(j=1; j<=i; j++){

            sum+=count;
            count++;


        }
    }
    cout<<sum<<"\n";

    return 0;
}
