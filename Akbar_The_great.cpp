// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
const int N=1e6+10;
vi g[N];
bool vis[N];
int level[N];
bool ok=false;
void bfs(int source,int ss)
{
    vis[source]=true;
    if(ss==0)
    {
        return;
    }
    queue<int>q;
    q.push(source);
    while(!q.empty())
    {
        int curr=q.front();
        //cout<<curr<<" ";
        q.pop();
        bool check=false;
        for(int child:g[curr])
        {
            if(!vis[child])
            {
                q.push(child);
                //cout<<child<<" ";
                vis[child]=true;
                level[child]=level[curr]+1;
                //cout<<child<<" "<<level[child]<<endl;
                if(level[child]>ss)
                {
                    check=true;
                    vis[child]=false;
                    level[child]=0;
                    break;
                }
            }
        }
        if(check)
        {
            break;
        }
    }
}

void solve()
{
    int n,r,m; cin>>n>>r>>m;
    for(int i=0;i<r;i++)
    {
        int e,v; cin>>e>>v;
        g[e].pb(v);
        g[v].pb(e);
    }
    vector<pr>sokti;
    for(int i=0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        sokti.pb({x,y});
    }
    bool check=false;
    for(int i=0;i<m;i++)
    {
        if(vis[sokti[i].f])
        {
            check=true;
            //cout<<sokti[i].f<<" ";
            break;
        }
        bfs(sokti[i].f,sokti[i].s);
    }
    if(check)
    {
        no;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    for(int i=1;i<=t; i++)
    {
        for (int i = 0; i < N; i++)
        {
            g[i].clear();
            vis[i] = false;
            level[i] = 0;
        }
        solve();
    }
}