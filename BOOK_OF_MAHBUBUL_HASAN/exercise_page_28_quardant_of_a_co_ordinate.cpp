#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;

    printf("Enter the values for X and Y\n");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
        cout<<"point"<<x<<","<<y<<" lies in the First quadrant"<<"\n";
    else if (x < 0 && y > 0)
        cout<<"point"<<x<<","<<y<<" lies in the Second quadrant"<<"\n";
    else if (x < 0 && y < 0)
        cout<<"point"<<x<<","<<y<<" lies in the Third quadrant"<<"\n";
    else if (x > 0 && y < 0)
        cout<<"point"<<x<<","<<y<<" lies in the Fourth quadrant"<<"\n";
    else if (x == 0 && y == 0)
        cout<<"point"<<x<<","<<y<<" lies at the origin"<<"\n";

    return 0;

}
