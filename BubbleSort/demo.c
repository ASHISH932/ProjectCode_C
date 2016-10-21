
#include<stdio.h>

int main()
{   int i,k ,j,a[1000],n,t;
  printf("enter elements(<1000) \n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);

   //bubble begins
for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
    {
       if (a[j]>a[j+1])
       {
           t=a[j];
           a[j]=a[j+1];
           a[j+1]=t;
       }

    }

}

printf("sorted array \n");
for(i=0;i<n;i++)
    printf("%d \t",a[i]);
    return 0;
}
