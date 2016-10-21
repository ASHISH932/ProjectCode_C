#include<bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false);cin.tie(0);
#define ll long long int
#define SET(a,b) (memset(a,b,sizeof(a)))
#define REP(i,a,b) for(int i = int(a);i<=int(b);i++)
#define mp make_pair
typedef pair<int,int> ii;
ll a[1000001];
int main(){
    _
    ll n,item;
    cin>>n;
    for(int i(1);i<=n;i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<"Enter Item you want to Search = "<<endl;
    cin>>item;
    ll beg=1,end=n,mid=(beg+end)/2;
    while(beg<=end && a[mid]!=item){
        if(a[mid]<item)
            beg=mid+1;
        else
            end=mid-1;
        mid=(beg+end)/2;
    }
    if(a[mid]==item)
        cout<<"Data is Found at Location : "<<mid;
    else
        cout<<"Data is Not Found ";
    return 0;
}
