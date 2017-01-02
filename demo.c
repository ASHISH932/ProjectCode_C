

//  BUBBLE SORT
#include <iostream>

using namespace std;

int main()
{
    int i,t,temp,flag,a[100];

    cout<<"Enter the number of elements in the array :";
    cin>>t;

    cout<<"Enter the elements:"<<endl;

    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }

    //IMPLEMENTING BUBBLE SORT

    do
    {
        flag = 0;

        for(i=0;i<t-1;i++)
        {

            if(a[i+1]<a[i])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                flag = 1;
            }
        }
    }while(flag==1);

    cout<<endl<<"The sorted array is :"<<endl;

    for(i=0;i<t;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}

