// SHUFFLING OF AN ARRAY
#include <iostream.h>
#include<stdlib.h>

int main()
{
    int i,n,arr[50],temp[50],s,r,j;
     cout << "Enter the number of elements in the array :" << endl;
    cin>> n;

    cout<<"Enter the Elements :"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        temp[i]=arr[i];
    }

    for(i=0;i<n;i++)
    {
    r = n-i;
    s = rand() % r;
    arr[i] = temp[s];
    for(j=0;j<n-i;j++)
    {
        if(j>s)
        {
            temp[j-1]=temp[j];
        }
    }
    }
    cout<<endl<<"The array after shuffling :"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}