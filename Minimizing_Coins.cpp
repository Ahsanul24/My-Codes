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
int dp_sona[1000005];
int call(int x,vi &v)
{
    if(x==0)
    {
        return 0;
    }
    if(dp_sona[x]!=-1)return dp_sona[x];
    int ans = INT_MAX;
    for(int i=0;i<v.size();i++)
    {
        if(x-v[i]>=0)
        {
            ans=min(ans+0LL,call(x-v[i],v)+1LL);
        }
    }
    return dp_sona[x]= ans;
}
void solve()
{
    int n,x; cin>>n>>x;
    vi v(n);
    memset(dp_sona,-1,sizeof(dp_sona));
    loop cin>>v[i];
    if(call(x,v)==INT_MAX)
    {
        cout<<-1<<nl;
    }
    else
    {
        cout<<call(x,v)<<nl;
    }
}
int main()
{
    Ahsanul;
    //test
    solve();
}