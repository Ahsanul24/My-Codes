// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>order_set;
// find_by_order() - Returns an iterator to the k-th largest element(counting from zero)
// order_of_key() - The number of items in a set that are strictly smaller than our item
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
vector<pair<int,int>>g[N];
vector<bool>vis(N,false);
vector<int>dist(N,INT_MAX);
void dijkstra(int source)
{
    set<pair<int,int>>q;//wt,node
    q.insert({0,source});
    dist[source]=0;
    while(!q.empty())
    {
        auto node=*q.begin();
        q.erase(q.begin());
        int v=node.second;
        int waight=node.first;
        if(vis[v])continue;
        vis[v]=true;
        for(auto child:g[v])
        {
            int child_v=child.first;
            int wt=child.second;
            if(dist[v]+wt<dist[child_v])
            {
                dist[child_v]=dist[v]+wt;
                q.insert({dist[child_v],child_v});
            }
        }
    }
    //ans stored in dist array
}
void solve()
{
    int n,m; cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x,y,wt; cin>>x>>y>>wt;
        g[x].push_back({y,wt});
    }
}
int main()
{
    Ahsanul;
    test
    solve();
}