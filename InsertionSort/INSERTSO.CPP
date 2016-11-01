//INSERTION SORT
 #include <iostream.h>
 
 int main()
 {
     int i,n,arr[50],num,j,k;
 
     cout<<"Enter the number of elements in the array :";
     cin>>n;
 
     cout<<"Enter the elements:"<<endl;
 
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }
 
     for(j=1;j<n;j++)
     {
         num = arr[j];
 
         for(i=0;i<j;i++)
         {
             if(arr[i]>num)
               {
                  for(k=j-1;k>=i;k--)
                  {
                      arr[k+1]=arr[k];
                  }
                  arr[i]=num;
                  break;
               }
 
         }
     }
 
     cout<<endl<<"The sorted array is :"<<endl;
 
     for(i=0;i<n;i++)
     {
         cout<<arr[i]<<endl;
     }
 
     return 0;
 }