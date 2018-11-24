#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,count=1,sum=0;

    cin>>n;

    for(i=1; i<=n; i++){


     if(count%2==0){

                sum-=count;

            }
            else{

                sum+=count;
            }
          count++;
    }

    cout<<sum<<endl;

    return 0;
}

