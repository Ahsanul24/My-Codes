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
const int N=1e5+10;
vi g[N];
bool vis[N];
int n;
int level[N];
vi color(n+2,-1);
void bfs(int source)
{
    vis[source]=true;
    queue<int>q;
    q.push(source);
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
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int e,v; cin>>e>>v;
        g[e].pb(v);
        g[v].pb(e);
    }
    bfs(1);
    vi l,r;
    for(int i=1;i<=n;i++)
    {
        if(level[i]&1)
        {
            l.pb(i);
        }
        else
        {
            r.pb(i);
        }
    }
    cout<<(l.size()*1ll*r.size()-(n-1))<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}