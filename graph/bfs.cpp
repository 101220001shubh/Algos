#define pb push_back
#define pu push  //  adds the value to the last of the queue 
#define lld long long int
#define mp make_pair
#define fi first
#define se second


vector< vector < long long int > > v(10000);   //adjancency list
vector<bool> visited(10000,false);  // stores whether i th element is visited or not 
vector<long long int> w(10000);  // w stores the min number of moves to reach from l to i
long long int m,i,j,k,n,c=0;
long long int l,r,mid,ans;
long long int x,y;
queue < pair<lld ,lld> > q;
pair <lld ,lld> p;
void bfs()
{
    
    if(q.empty()) return;   // return if there are no further element in the queue
    lld z= q.front().fi;
     if(visited[z] == true){
        q.pop();
        return;
    }
    visited[z]=true;
    w[z]=q.front().se;
    q.pop();

    lld y=v[z].size();
    for(int i=0; i<y; i++)   // add all the elemants(to which z th element can reach in one move) to the queue
    {
        if(visited[v[z][i]] == false)
        {
            q.pu(mp(v[z][i],w[z]+1));  // w[z]+1 so thaat the no of moves required increases
        }
    }
    bfs();
}

void solve()
{
    cin>>n>>m;    // n is the number of vertices with value 1 to n
                  // m is the number of edges
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    cin>>l;  // l is the root node for the bfs
    w[l]=0;    
    q.pu(mp(l,c));
   
    while(!q.empty())
        bfs();

    for(i=1;i<=n;i++)
    {
        if(visited[i]==false) cout<<"-1 ";
        else cout<<w[i]<<" ";
    }
}

