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
const int N=1e6+10;
int dp_sona[N];
int call(int x,vi &v)
{
    if(x==0)
    {
        return 1;
    }
    if(dp_sona[x]!=-1)return dp_sona[x];
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        if(x-v[i]>=0)
        {
            sum=(sum+call(x-v[i],v))%MOD;
        }
    }
    return dp_sona[x]= sum%MOD;
}
void solve()
{
    int n,x; cin>>n>>x;
    memset(dp_sona,-1,sizeof(dp_sona));
    vi v(n);
    loop cin>>v[i];
    int ans=call(x,v);
    cout<<ans<<nl;
}
int main()
{
    Ahsanul;
    //test
    solve();
}