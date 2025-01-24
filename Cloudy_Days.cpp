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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
const int N=1e3+10;
vi g[N];
bool vis[N];
int level[N];
void bfs(int source)
{
    queue<int>q;
    q.push(source);
    vis[source]=true;
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        for(int child:g[curr])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
                level[child]=level[curr]+1;
            }
        }
    }
}
void solve()
{
    int n,m,k,c; cin>>n>>m>>k>>c;
    for(int i=0;i<m;i++)
    {
        int e,v; cin>>e>>v;
        g[e].pb(v);
        g[v].pb(e);
    }
    bfs(c);
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(level[i]<=k and level[i]>0)cnt++;;
    }
    cout<<cnt+1<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}