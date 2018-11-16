#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year;

    cin>>year;

    if(year%400==0){

        cout<<year<<" is leep year"<<"\n";
    }
    else if(year%100==0){

        cout<<year<<" is not leep year"<<"\n";
    }
    else if(year%4==0){

        cout<<year<<" is leep year"<<"\n";
    }

    else{
        cout<<year<<" is not leep year"<<"\n";
    }

    return 0;
}
