#define lld long long int 
vector< vector < long long int > > v(10000);
vector<bool> visited(10000,false);
vector<long long int> w(10000);

long long int m,i,j,k,n,c=0;
long long int l,r,mid,ans;
long long int x,y;

void dfs(long long int i)
{
    if(visited[i]==true) return;
    visited[i]=true;    
    w[i]=c;
    lld l=v[i].size();
    for(lld j=0;j<l;j++)
    {
        if(visited[v[i][j]]==false)
        {
            dfs(v[i][j]);
        }
    }
}
void solve()
{

    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
 /*   for(i=1;i<=n;i++)
    {
        l=v[i].size();
        cout<<l<<" ";
        for(j=0;j<l;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
 */   for(i=1;i<=n;i++)
    {
        if(visited[i]==false)
        {
            dfs(i);
            c+=1;
        }
    }

    for(i=1;i<=n;i++) cout<<w[i]<<" ";

}
