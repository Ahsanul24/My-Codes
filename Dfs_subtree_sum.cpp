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
vector<int> g[N];
int subtree_sum[N];
int even[N];
void dfs(int vertex,int par=0)
{
    subtree_sum[vertex]+=vertex;
    if(vertex%2==0)even[vertex]++;
    for(int child:g[vertex])
    {
        if(child==par)continue;
        dfs(child,vertex);
        subtree_sum[vertex]+=subtree_sum[child];
        even[vertex]+=even[child];
    }
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
    for(int i=1;i<=n;i++)cout<<subtree_sum[i]<<" "<<even[i]<<endl;;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}