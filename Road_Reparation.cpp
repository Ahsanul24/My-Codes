// // IN THE NAME OF ALLAH
// // Coded by Ahsanul Imam
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// const int  MOD = 1000000007;
// #define pb push_back
// #define vi vector<int>
// #define vl vector<ll>
// #define f first
// #define s second
// #define nl '\n';
// #define bit(a) __builtin_popcountll(a)
// #define w(x) while (x--)
// #define test int t; cin>>t; for (int i = 0; i < t; i++)
// #define loop for (int i = 0; i < n; i++)
// #define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
// #define srt(v) sort(v.begin(), v.end());
// #define rsrt(v) sort(v.rbegin(), v.rend());
// #define gcd(a, b) __gcd<long long int>(a, b)
// #define lcm(a, b) (a * b) / gcd(a, b)
// #define pi 2*acos(0.0)
// #define pr pair<int, int>
// #define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
// vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
// vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
// int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
// const int N=2e5+10;
// int par[N];
// int Size[N];
// vi gg[N];
// bool vis[N];
// void make(int a)
// {
//     par[a]=a;
//     Size[a]=1;
// }
// int find(int a)
// {
//     if(par[a]==a)return a;
//     return par[a]=find(par[a]);
// }
// void Union(int a,int b)
// {
//     a=find(a);
//     b=find(b);
//     if(a!=b)
//     {
//         if(Size[a]<Size[b])
//         {
//             swap(a,b);
//         }
//         par[b]=a;
//         Size[a]+=Size[b];
//     }
// }
// void dfs(int vertex)
// {
//     vis[vertex]=true;
//     for(int child:gg[vertex])
//     {
//         if(!vis[child])
//         {
//             dfs(child);
//         }
//     }
// }
// void solve()
// {
//     int n,m; cin>>n>>m;
//     for(int i=1;i<=n;i++)
//     {
//         make(i);
//     }
//     vector<pair<int,pair<int,int>>>g;
//     for(int i=1;i<=m;i++)
//     {
//         int a,b,c; cin>>a>>b>>c;
//         gg[a].pb(b);
//         gg[b].pb(a);
//         g.push_back({c,{a,b}});
//     }
//     sort(g.begin(),g.end());
//     ll ans=0;
//     for(auto it:g)
//     {
//         int cost=it.f;
//         int node1=it.second.f;
//         int node2=it.second.s;
//         if(find(node1)==find(node2))continue;
//         Union(node1,node2);
//         //cout<<node1<<" "<<node2<<nl;
//         ans+=cost;
//     }
//     int cnt=0;
//     for(int i=1;i<=n;i++)
//     {
//         if(!vis[i])
//         {
//             dfs(i);
//             cnt++;
//         }
//     }
//     if(cnt>1)
//     {
//         cout << "IMPOSSIBLE" <<nl;
//         return;
//     }
//     cout<<ans<<nl;
// }
// int main()
// {
//     Ahsanul;
//     //test
//     solve();
// }
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
const int N=2e5+10;
vector<pr>g[N];
int par[N];
void solve()
{
    int n,m; cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int u,v,w; cin>>u>>v>>w;
        u--,v--;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    priority_queue<pair<int,int>,vector<pr>,greater<pr>>q;
    q.push({0,0});
    
    vector<bool>vis(n+1,false);
    ll ans=0;
    while(!q.empty())
    {
        auto it=q.top();
        q.pop();
        if(vis[it.s])continue;
        vis[it.s]=true;
        ans+=it.f;
        int node=it.s;
        for(auto child:g[node])
        {
            if(!vis[child.f])
            {
                q.push({child.second,child.f});
                par[child.f]=node;
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        cout<<par[i]+1<<" "<<i+1<<nl;
    }
    cout<<ans<<nl;
}
int main()
{
    Ahsanul;
    //test
    solve();
}