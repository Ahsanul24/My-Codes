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
int timer;
ll com(ll x)
{
    return max(0ll,(x*(x-1)/2));
}
void dfs(int vertex,int per,ll &ans,ll &n,vector<bool>&vis,vector<int>&dis,vector<int>&low,vector<int>g[])
{
    vis[vertex]=true;
    dis[vertex]=low[vertex]=timer++;
    for(int child:g[vertex])
    {
        if(child==per)continue;
        if(!vis[child])
        {
            dfs(child,vertex,ans,n,vis,dis,low,g);
            low[vertex]=min(low[vertex],low[child]);//exiting the child
            if(low[child]>dis[vertex])//bridge check //vertex er discovery time beshi hole child er lowest time theke 
            //tahole bridge hobe na
            {
                //cout<<vertex<<" "<<child<<endl;
                //cout<<timer<<" "<<dis[child]<<" "<<low[child]<<endl;
                int nice=timer-dis[child];
                ans=min(ans,com(nice)+com(n-nice));
            }
        }
        else
        {
            //back edge
            low[vertex]=min(low[vertex],dis[child]);
        }
    }
}
void solve()
{
    ll n,m; cin>>n>>m;
    vector<bool>vis(n+1,false);
    vector<int>dis(n+1,0);
    vector<int> low(n + 1, 0);
    vector<int>g[n+1];
    for(int i=0;i<m;i++)
    {
        int e,v; cin>>e>>v;
        g[e].pb(v);
        g[v].pb(e);
    }
    ll ans=(n*(n-1))/2;
    dfs(1,-1,ans,n,vis,dis,low,g);
    //cout<<endl;
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
    return 0;
}