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
bool vis[N];
vi g[N];
int a[N];
int ans[N];
int m;
void dfs(int vertex,int cnt)
{
    vis[vertex]=true;
    if(a[vertex])cnt++;
    else cnt=0;
    if(g[vertex].size()==1 and cnt<=m and vertex>1)
    {
        ans[vertex]=1;
        return;
    }
    for(int child:g[vertex])
    {
        if(cnt>m)continue;
        if(!vis[child])
        {
            dfs(child,cnt);
            ans[vertex]+=ans[child];
        }
    }
}
void solve()
{
    int n; cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<n;i++)
    {
        int e,v; cin>>e>>v;
        g[e].pb(v);
        g[v].pb(e);
    }
    dfs(1,0);
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;
    cout<<ans[1]<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}