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
    int n,ptr,temp;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    a[0]=0;
    for(int i=2;i<=n;i++){
        temp=a[i];
        ptr=i-1;
        while(temp<a[ptr]){
            a[ptr+1]=a[ptr];
            ptr--;
        }
        a[ptr+1]=temp;
    }
    cout<<"After Sorting : \n";
    for(int i=1;i<=n;i++)
        cout<<a[i]<<endl;
    return 0;
}
