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
const int N=1e3+10;
vector<pair<int,int>>g[N];
vector<int>waight(N,MOD);
int par[N];
void call(int source,int n)
{
    vector<bool>vis(n+1);
    set<pair<int,int>>q;
    q.insert({0,source});
    waight[source]=0;
    while(q.size()>0)
    {
        auto node=*q.begin();
        q.erase(node);
        int wt=node.first;
        int v=node.second;
        if(vis[v])continue;
        vis[v]=true;
        for(auto child:g[v])
        {
            if(waight[v]+child.second<waight[child.first])
            {
                waight[child.first]=waight[v]+child.second;
                q.insert({waight[child.first],child.first});
                par[child.first] = v;
            }
        }
    }   
}
void update (int u,int v,int wt)
{
    g[u].push_back({v,wt});
}
void solve()
{
    int n,m; cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        char a,b; int wt; cin>>a>>b>>wt;
        int u=a-'A';
        int v=b-'A';
        int w=wt;
        g[u].push_back({v,w});
    }
    char sour,des; cin>>sour>>des;
    int s=sour-'A';int d=des-'A';
    par[s]=-1;
    call(s,n);
    //for(int i=0;i<n;i++)cout<<waight[i]<<" ";
    cout<<"Before update"<<nl;
   cout<<"shortest path waight from A to E is "<<waight[d]<<nl;
   int parent=par[d];
   //cout<<parent<<" ";
   vector<int>path;
   path.pb(parent);
   while(parent!=-1)
   {
        parent=par[parent];
        path.pb(parent);
   }
   reverse(path.begin(),path.end());
   //for(auto it:path)cout<<it<<" ";cout<<nl;
   for(int i=1;i<path.size();i++)
   {
        cout<<(char)('A'+path[i])<<"->";
   } 
   cout<<des<<nl;
    //update section;
    char a,b; int w; cin>>a>>b>>w;
    update(a-'A',b-'A',w);
    call(s,n);
    cout<<"After updation:"<<nl;
    cout<<"shortest path waith form A to E is "<<waight[d]<<nl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}