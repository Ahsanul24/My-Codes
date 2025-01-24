// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>order_set;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define nl '\n';
#define bit(a) __builtin_popcountll(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd<long long int>(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
const int N=1e5+10;
int par[N];
int Size[N];
void make(int a)
{
    par[a]=a;
    Size[a]=1;
}
int find(int a)
{
    if(par[a]==a)return a; 
    return par[a]=find(par[a]);
}
void Union(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a!=b)
    {
        if(Size[a]<Size[b])
        {
            swap(a,b);
        }
        par[b] = a;
        Size[a] += a;
    }
}
void solve()
{
    int n,m; cin>>n>>m;
    vector<pair<int,pair<int,int>>>g;
    for(int i=0;i<m;i++)
    {
        int u,v,w; cin>>u>>v>>w;
        g.push_back({w,{u,v}});
    }
    for(int i=0;i<n;i++)
    {
        make(i);
    }
    sort(g.begin(),g.end());
    int cost=0;
    vector<pair<int,int>>mst_edge;
    for(auto node:g)
    {
        int wt=node.first;
        int u=node.second.first;
        int v=node.second.second;
        if(find(u)==find(v))continue;
        Union(u,v);
        cost+=wt;
        mst_edge.push_back({u,v});
    }
    for(auto it:mst_edge)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main()
{
    Ahsanul;
    //test
    solve();
}