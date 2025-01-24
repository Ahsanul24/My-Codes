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
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
const int N=205;
bool vis[N];
vi g[N];
void dfs(int vertex)
{
    vis[vertex]=true;
    for(int child:g[vertex])
    {
        if(!vis[child])
        {
            dfs(child);
        }
    }
}
void solve()
{
    int n,k; cin>>n>>k;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        if(x!=0)
        {
            cnt++;
        }
        for(int j=1;j<=x; j++)
        {
            int y; cin>>y;
            g[i].pb(y+n);
            g[y+n].pb(i);
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
            ans++;
        }
    }
    if(cnt==0)
        cout<<ans<<endl;
    else
        cout<<ans-1<<endl;
    //cout<<ans+cnt<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}