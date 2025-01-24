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
const int N=1e5+10;
vi g[N];
bool vis[N];
vi path;
vi par(N,-1);
vi level(N,0);
int n,m;
void bfs(int source)
{
    vis[source]=true;
    queue<int>q;
    q.push(source);
    while(!q.empty())
    {
        int curr=q.front();
        path.pb(curr);
        q.pop();
        for(int child:g[curr])
        {
            if(!vis[child])
            {
                q.push(child);
                par[child]=curr;
                vis[child]=true;
                level[child]=level[curr]+1;
            }
        }
    }
}
void solve()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int e,v; cin>>e>>v;
        g[e].pb(v);
        g[v].pb(e);
    }
    bfs(1);
    if(level[n]==0)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    vi ans;
    int desti=n;
    ans.pb(desti);
    while(desti!=1)
    {
        ans.pb(par[desti]);
        desti=par[desti];
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto it:ans)cout<<it<<" ";cout<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}