#include<stdio.h>
void sort(int a[],int n,int l)
{
    int max=n,mid;
    mid=(max+l)/2;
    if(l<max)
        sort(a,mid,l);
        sort(a,max,mid+1);
}
int main()
{
    int a[20],j,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n-1,0);
    for(i=0;i<n;i++)
        printf("%d \t",a[i]);
}


