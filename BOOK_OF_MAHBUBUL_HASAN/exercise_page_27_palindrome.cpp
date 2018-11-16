#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,sum,t,temp;

    cin>>n;
    temp=n;
    sum=0;

    while(n>0){

        t=n%10;
        sum=sum*10+t;
        n=n/10;
    }
    n=temp;

    if(n==sum){
        cout<<"palindrome number";
    }
    else{

        cout<<"not palindrome number";
    }

    return 0;
}
