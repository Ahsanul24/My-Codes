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
const int N =110;
map<pr,int>m;
vi g[N];
void solve()
{
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,c; cin>>a>>b>>c;
        g[a].pb(b);
        g[b].pb(a);
        m[{a,b}]=0;
        m[{b,a}]=c;
    }
    int cnt=0,ans=INT_MAX;
    int x=1;
    int v=0;
    int pre=0;
    bool check=true;
    while(x!=1 or check)
    {
        if(check)
        {
            v=g[x][0];
            check=false;
        }
        else
        {
            int i=g[x][0];
            int j=g[x][1];
            v=(pre==i)?j:i;
        }
        cnt+=m[{x,v}];
        pre=x;
        x=v;
    }
    ans=min(ans,cnt);
    //cout<<ans<<endl;
    cnt=0,x=1,v=0,pre=0;
    check=true;
    while (x != 1 or check)
    {
        if (check)
        {
            v = g[x][1];
            check = false;
        }
        else
        {
            int i = g[x][0];
            int j = g[x][1];
            v = (pre == i) ? j : i;
        }
        cnt += m[{x, v}];
        pre = x;
        x = v;
    }
    ans=min(ans,cnt);
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}