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
const int N=2*1e5+10;
int n;
vi g[N];
bool vis[N];
int res[N];
vi color(N,0);
bool bfs(int vertex)
{
    color[vertex]=1;
    queue<int>q;
    q.push(vertex);
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        for(int child:g[curr])
        {
            if(color[child]==0)
            {
                color[child]=(color[curr]==1)?2:1;
                q.push(child);
            }
            else if(color[child]==color[curr])
            {
                return false;
            }
        }
    }
    return true;
}
bool check()
{
    for(int i=1;i<=n;i++)
    {
        if(color[i]==0)
        {
            if(!bfs(i))
            {
                return false;
            }
        }
    }
    return true;
}
void solve()
{
    int m; cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int e,v; cin>>e>>v;
        g[e].pb(v);
        g[v].pb(e);
    }
    if(!check())
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            cout<<color[i]<<" ";
        }
    }
}
int main()
{
    Ahsanul;
    //test
    solve();
}