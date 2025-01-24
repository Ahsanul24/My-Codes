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
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
const int N=1e5+10;
vector<int>adj[N];
bool vis[N];
bool isCycle(int v,int par)
{
    vis[v]=true;
    bool check=false;
    for(auto child:adj[v])
    {
        if(vis[child] and child==par)continue;
        if(vis[child])return true;
        check |= isCycle(child,v);
    }
    return check;
}
void solve()
{
    int n,m; cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int v,e; cin>>v>>e;
        adj[v].push_back(e);
        adj[e].push_back(v);
    }
    bool check=false;
    for(int i=0;i<n;i++)
    {
        if(vis[i])continue;
        if(isCycle(i,0))
        {
            check=true;
            break;
        }
    }
    cout<<check<<endl;
}
int main()
{
    Ahsanul;
    //test
    solve();
}