/*Author SHUBH AGRAWAL  */

#include<bits/stdc++.h>
using namespace std;
#define pb push_back


lld l,r,mid,ans;
lld n,m,i,j,k;

void solve()
{
    cin>>n;
    vector<lld> v;
    for(i=0;i<n;i++) 
    {
        cin>>l;
        v.pb(l);
    }
    cin>>m;
    ans=-1;
    l=0;
    r=n-1;
    lld ans2=0;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(v[mid]>v[ans2])
        {
            if(v[mid]>=v[0])
                l=mid+1;
            else r=mid-1;
        }
        else
        {
            ans2=mid;
            r=mid-1;
        }
    }
    if(m<=v[n-1])
    {
        l=ans2;
        r=n-1;
    }
    else 
    {
        r=ans2-1;
        l=0;
    }
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(v[mid]==m)
        {
            ans=mid;
            break;
        }
        else if(v[mid]>m)
        {
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<"\n";
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
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
