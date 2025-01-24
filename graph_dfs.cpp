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
const int N = 1e5+10;
vector<int>graph[N];
bool vis[N];
void dfs(int vertex)
{

    //if(vis[vertex])return;
        cout<<vertex<<" ";
    vis[vertex] = true;
    for(auto child:graph[vertex])
    {
        if(vis[child])continue;
        dfs(child);
    }
}
void solve()
{
    int n,m; cin>>n>>m;
    int ini=0;
    for(int i=0;i<m;i++)
    {
        int v,vv; cin>>v>>vv;
        graph[v].push_back(vv);
        graph[vv].push_back(v);
        if(ini==0)
        {
            ini=v;
        }
    }
    dfs(ini);
}
int main()
{
    Ahsanul;
    //test
    solve();
}