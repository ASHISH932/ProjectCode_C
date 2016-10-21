#include <iostream>

using namespace std;
int bsearch(int a[],int n,int x)
{
    int l=0,u=n-1,m;
    while(u>l)
    { m=(u+l)/2;
        if(a[m]==x)
          return m;
        else if(x>a[m])
            l=m+1;
        else if(a[m]>x)
            u=m-1;
    }
    return -1;
}
int main()
{
    int i,a[1000],n,x,j;
cout<<"enter no of elements"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
              int t;
              if(a[i]>a[j])
                  {
                   t=a[j];
                    a[j]=a[i];
                    a[i]=t;
                  }
            }
        }
        cout<<"sorted array"<<endl;
        for(i=0;i<n;i++) cout<<a[i]<<"\t";
        cout<<"enter element needed to be searched";
        cin>>x;
        int p=bsearch(a,n,x);
        if(p==-1)
            cout<<"not present";
        else
            cout<<x<<"is present"<<endl;
            cout<<"index in sorted array for"<<x<<"is"<<p<<endl;
        return 0;

