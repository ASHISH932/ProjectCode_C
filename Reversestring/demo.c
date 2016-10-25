#include<stdio.h>

int main()
{
    char a[1000],s;
    int i,j,t;
    printf("enter string \n");
    gets(a);
    for(j=0;a[j]!='\0';j++);
    j--;
         if(j%2==0)
            t=j/2+1;
         else
         t=j/2;

    for(i=0;i<=t;i++)
    {

        s=a[i];
        a[i]=a[j];
        a[j]=s;
              j--;

    }

printf("%s",a);


    return 0;
}
