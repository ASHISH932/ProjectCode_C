//  BUBBLE SORT
 #include <iostream.h>
 
 
 int main()
 {
    int i,n,temp,flag,arr[50];
 
     cout<<"Enter number of elements in the array :";
     cin>>n;
 
     cout<<"Enter the elements: "<<endl;
 
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }
 
     do
     {
         flag = 0;
         for(i=0;i<n-1;i++)
         {
             if(arr[i+1]<arr[i])
             {
                 temp = arr[i];
                 arr[i] = arr[i+1];
                 arr[i+1] = temp;
                 flag = 1;
             }
         }
     }while(flag==1);
 
 
 
 
 
     cout<<endl<<"The Sorted Array is: "<<endl;
 
     for(i=0;i<n;i++)
     {
         cout<<arr[i]<<endl;
     }
 
 
 
     return 0;
 }