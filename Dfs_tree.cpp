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
const int N=1e5;
vector<int>tree[N];
int hight[N],depth[N];
void dfs(int vertex,int parent=0)
{
    for(int child:tree[vertex])
    {
        if(child==parent)continue;
        depth[child]=depth[vertex]+1;
        dfs(child,vertex);
        hight[vertex]=max(hight[child]+1,hight[vertex]);
    }
}
void solve()
{
    int n; cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int e,v; cin>>e>>v;
        tree[e].pb(v);
        tree[v].pb(e);
    }
    dfs(1);
    for(int i=0;i<n;i++)
    {
        cout<<hight[i]<<" "<<depth[i]<<endl;
    }
}
int main()
{
    Ahsanul;
 //   test
    solve();
}