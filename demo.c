

// LINEAR SEARCH
#include <iostream>

using namespace std;

int main()
{
    int i,t,a[100],s,flag;

    cout<<"Enter the number of elements in the array :";
    cin>>t;

    cout<<"Enter the elements:"<<endl;

    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }

    cout<<endl<<"Enter the element to search for :";
    cin>>s;

    //IMPLEMENTING LINEAR SEARCH

    flag = 0;

    for(i=0;i<t;i++)
    {
        if(s==a[i])
        {
             cout<<endl<<"The element is found at position :"<<i + 1;
             flag=1;
        }

    }

    if(flag==0)
    {
        cout<<endl<<"The element "<<s<<" does not exist in the array.";
    }



    return 0;
}

