// LINEAR SEARCH
 #include <iostream.h>
 
 int main()
 {
     int i,n,arr[100],num,flag;
 
     cout<<"Enter the number of elements in the array: ";
     cin>>n;
 
     cout<<"Enter the elements:"<<endl;
 
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }
 
     cout<<endl<<"Enter the element to search for :";
     cin>>num;
 
     flag = 0;
 
     for(i=0;i<n;i++)
     {
         if(num==arr[i])
         {
              cout<<endl<<"The element is found at position: "<<i + 1;
              flag=1;
         }
 
     }
 
     if(flag==0)
     {
         cout<<endl<<"The element "<<num<<" does not exist in the array.";
     }
 
 
 
     return 0;
 }