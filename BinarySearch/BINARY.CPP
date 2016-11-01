//Binary Search

#include<iostream.h>
int main()

{
  int n,i,num,beg,index,mid,last;
  int arr[50];

  cout<<"Enter no of elements: ";
  cin>>n;
  cout<<"Enter elements: "<<endl;
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter the element to be searched";
  cin>>num;

  beg=0;
  last=n-1;
  index=0;
  while(last>=beg && index==0)
  {
    mid=(beg+last)/2;
    if(num<arr[mid])
    {
      last=mid-1;
    }
    else
    if (num>arr[mid])
    {
      beg=mid+1;
    }
    else
    {
      cout<<"The element is at positon: "<<mid+1;
      index=1;
    }
  }
  if(index==0)
  {
    cout<<"Element not found!";
  }
return 0;
}