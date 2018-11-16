#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year;

    cin>>year;

    if(year%400==0 || (year%100!=0 && year%4==0)){

        cout<<year<<" is leep year";
    }
    else{

        cout<<year<<" is not leep year";
    }

    return 0;
}
