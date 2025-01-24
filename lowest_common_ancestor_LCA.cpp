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
const int N=1e5+10;
vi g[N];
int per[N];
void dfs(int vertex,int par=-1)
{
    per[vertex]=par;
    for(int child:g[vertex])
    {
        if(child==par)continue;
        dfs(child,vertex);
    }
}
vi path(int x)
{
    vi ans;
    while(x!=-1)
    {
        ans.pb(x);
        x=per[x];
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
void solve()
{
    int n; cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int e,v; cin>>e>>v;
        g[e].pb(v);
        g[v].pb(e);
    }
    dfs(1);
    int x,y; cin>>x>>y;
    vi x_path=path(x);
    vi y_path=path(y);
    int lca=-1;
    for(int i=0;i<min(x_path.size(),y_path.size());i++)
    {
        if(x_path[i]==y_path[i])lca=x_path[i];
    }
    cout<<lca<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}