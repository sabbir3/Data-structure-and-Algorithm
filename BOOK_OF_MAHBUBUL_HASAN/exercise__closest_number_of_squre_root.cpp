#include<bits/stdc++.h>
using namespace std;

int main()
{
    double number,n,c,f;

    cin>>number;
    n=sqrt(number);
    c=floor(n);

    if(n-c<.500){

        cout<<"closest integer number of a given number="<<floor(sqrt(number));
    }
    else{

         cout<<"closest integer number of a given number="<<ceil(sqrt(number));
    }

    return 0;
}

