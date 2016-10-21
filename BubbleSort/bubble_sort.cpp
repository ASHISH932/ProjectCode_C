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
    ll n,temp;
    cin>>n;
    for(int i(1);i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"After Sorting : \n";
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
