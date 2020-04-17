/*Author SHUBH AGRAWAL  */

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lld long long int


lld l,r,mid,ans;
lld n,m,i,j,k;
lld x,w,y,z,p;
lld n1,n2,m1,m2;

vector<lld> v;

void solve()
{
    cin>>n;
    
    vector<lld> v,w(100000);
    for(i=0;i<n;i++) 
    {
        cin>>l;
        v.pb(l);
    }
    w[0]=v[0];
    for(i=1;i<n;i++)
    {
        w[i]=max(v[i],w[i-1]+v[i]);
    }
    ans=-1000000000;
    for(i=0;i<n;i++)
    {
        if(w[i]>ans) ans=w[i];
    }
    cout<<ans;
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
