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
vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
const int N=4*1e5+10;
vi graph[N];
bool vis[3000000],path[3000000];
int par[3000000];
int dp_sona[N][27];
vi fre(27,0);
bool cycle(int v)
{
    vis[v]=true;
    path[v]=true;
    for(int child:graph[v])
    {
        if(!vis[child])
        {
            if(cycle(child))
            {
                return true;
            }
        }
        else if(path[child])
        {
            return true;
        }
    }
    path[v]=false;
    return false;
}
void dfs(int v,string &s)
{
    vis[v]=true;
    for(int child:graph[v])
    {
        if(!vis[child])
        {
            dfs(child,s);

        }
        for (int i = 0; i <= 26; i++)
        {
            dp_sona[v][i] = max(dp_sona[v][i], dp_sona[child][i]);
        }
    }
    dp_sona[v][s[v-1]-'a']++;
    // cout<<suru<<endl;
    // cout<<v<<" "<<par[v]<<endl;
}
void solve()
{
    memset(dp_sona,0,sizeof(dp_sona));
    int n,k; cin>>n>>k;
    string s; cin>>s;
    for(int i=0;i<k;i++)
    {
        int e,v; cin>>e>>v;
        graph[e].pb(v);
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        { 
            if(cycle(i))
            {
                cout<<-1;
                return;
            }
        }
    }
    for(int i=1;i<N;i++)
    {
        vis[i]=false;
    }
    int ans=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            vi tem;   
            //ans=max(ans,dfs(i,s,-1,i));
            dfs(i,s);
            for(int j=0;j<=26;j++)
            {
                ans=max(ans,dp_sona[i][j]);
            }
            //dfs(i,s,-1,i);
            //ans=max(ans,*max_element(tem.begin(),tem.end()));
        }
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}
