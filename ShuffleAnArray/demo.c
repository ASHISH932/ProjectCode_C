#include<stdio.h>

int main()
{
 int a[1000],i,j,k,n;
    printf("enter no. of elements \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        int w=2;
        while(w==2)
        {
    printf("these are elements with respective index \n");
    for(i=0;i<n;i++)
        printf(" %d of index %d \n",a[i],i);
    printf("enter the index of 2 elements u want to shuffle \n");
    scanf("%d %d",&j,&k);
      int  t=a[j];
        a[j]=a[k];
        a[k]=t;
         printf("these are elements with respective index \n");
    for(i=0;i<n;i++)
        printf(" %d of index %d \n",a[i],i);
        printf("press 2  to continue or sny other to exit \n");
        scanf("%d",&w);
    }

    return 0;
}
