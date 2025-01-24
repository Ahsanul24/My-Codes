// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcountll(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
const int N=2*1e5+10;
vi g[N];
int n,m;
int levelA[N],levelB[N];
bool vis[N];
vector<int> bfs(int source)
{
    for(int i=1;i<=n;i++)
    {
        vis[i]=false;
    }
    vector<int>dis(n+3,0);
    vis[source]=true;
    queue<int>q;
    q.push(source);
    while (!q.empty())
    {
        int curr=q.front();
        q.pop();
        for(int child:g[curr])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
                dis[child]=dis[curr]+1;
            }
        }
    }
    return dis;
}
void solve()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int e,v; cin>>e>>v;
        g[e].pb(v);
        g[v].pb(e);
    }
    vi a,b;
    a=bfs(1);
    b=bfs(m);
    // for(int i=1;i<=n;i++)cout<<a[i]<<" ";cout<<endl;
    // for(int i=1;i<=n;i++)cout<<b[i]<<" ";cout<<endl;
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]>b[i])
        {
            ans=max(ans,(2*1ll*a[i]));
        }
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}