//recursive algorithm for binary search
#include <iostream>
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
using namespace std;

int  binary(int a[],int start,int end,int x)//a=input array,start=starting index,end=last index,x=element to be searched
{   if(end>=start)
    {
    int mid=start+int(end-start/2);
    if(a[mid]==x)
        return mid;
    else if(a[mid]<x)
        return  binary(a,mid+1,end,x); //recursive call
    else if(a[mid]>x)
        return  binary(a,start,mid-1,x); //recursive call
    }
    return -1;


}

int main()
{
	int n,i;
	cout<<"Enter no of elements in array";
	cin>>n;
	int array[n];
	cout<<"Enter elements of array in sorted order ";
	For(i,0,n)
		cin>>array[i];
    int x;
    cout<<"Element to be searched ";
    cin>>x;
    int result=binary(array,0,n-1,x);
    if(result==-1)
        cout<<"element not found";
    else
        cout<<"element found at "<<result;
    return 0;

}
