//Selection Sorting
#include<iostream.h>
void selsort(int[],int);
void main()

{
  int ar[5],item,n=0,index;
  cout<<"Enter number of elements: ";
  cin>>n;
  cout<<"Enter array: ";
  for(int i=0;i<n;i++)
  cin>>ar[i];

  int small=0,pos=0,tmp=0;
  
  for( i=0;i<n-1;i++)
  {
     small=ar[i];
     pos = i ;
     for(int j=i+1;j<n;j++)
     {

       if (ar[j]<small)
       {
         small=ar[j];
         pos=j;
       }
     }
     tmp=ar[i];
     ar[i]=ar[pos];
     ar[pos]=tmp;
  }
  cout<<" sorted array ";
  for(i=0;i<n;i++)
  cout<<ar[i]<<" ";
}

