/*Author SHUBH AGRAWAL  */

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lld long long int

lld l,r,mid,ans;
lld n,m,i,j,k;

void solve()
{
    cin>>n;
    
    vector<lld> v,w(100000);
    for(i=0;i<n;i++) 
    {
        cin>>l;
        v.pb(l);
    }
    ans=-1;
    if(v[0]<=v[1])
    {
         cout<<"0";
         return ;
    }
    l=1;
    r=n-1;
    while(l<=r)
    {
        mid = l+(r-l)/2;
        if(v[mid-1]<v[mid])
        {
            ans=mid-1;
            r=mid-1;
        }
        else
        {
            ans=mid;
            l=mid+1;
        }
    }
    cout<<ans;
    return ;
}

int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lld t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
