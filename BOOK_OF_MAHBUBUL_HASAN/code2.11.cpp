#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,sum=0,j,n;
    cin>>n;

    for(i=1; i<=n; i++){

        for(j=1; j<=n;j++){

            sum=sum+j;

        }

          cout<<sum<<endl;
    }


    return 0;
}
