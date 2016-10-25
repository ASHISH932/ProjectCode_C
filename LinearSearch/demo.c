#include<stdio.h>
lsearch(int a[],int n ,int x)
{
    int i=0;
    for(i=0;i<n;i++)
    { if(a[i]==x)
        return i;
    }
    return 0;
}
int main()
{
    int a[1000],n,x,i,j;
    printf("enter no. of elements \n");
    scanf("%d",&n);
    printf("eneter array \n");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     printf("enter element to be searched \n");
     scanf("%d",&x);

     j=lsearch(a,n,x);
     if(j)
        printf(" %dis at index %d",x,i);
     else
        printf("not present \n");
    return 0;

}
