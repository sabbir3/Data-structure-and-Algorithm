#include<iostream>
#include<conio.h>
using namespace std;
void mergesort(int *,int,int);
void merge(int *,int,int,int);
int a[20],i,n,b[20];
main()
{
    cout <<"\n Enter Total Number of Elements: ";
    cin >> n;
    cout <<"Enter the Elements: ";
    for(i=0; i<n; i++)
        cin >> a[i];
    mergesort(a,0,n-1);
    cout <<" \n Numbers After Sort: \n";
    for(i=0; i<n; i++)
        cout << a[i] << " ";
    getch();
}
void mergesort(int a[],int i,int j)
{
    int mid;
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid);
        mergesort(a,mid+1,j);
        merge(a,i,mid,j);
    }
}
void merge(int a[],int low,int mid ,int high)
{
    int h,i,j,k;
    h=low;
    i=low;
    j=mid+1;
    while(h<=mid && j<=high)
    {
        if(a[h]<=a[j])
            b[i]=a[h++];
        else
            b[i]=a[j++];
        i++;
    }
    if( h > mid)
        for(k=j; k<=high; k++)
            b[i++]=a[k];
    else
        for(k=h; k<=mid; k++)
            b[i++]=a[k];
    cout <<"\n";
    for(k=low; k<=high; k++)
    {
        a[k]=b[k];
        cout << a[k] <<" ";
    }
}
