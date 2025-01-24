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
void solve()
{
    ll n,m; cin>>n>>m;
    ll mex=-1;
    for(ll i=0;i<n;i++)
    {
        map<ll,ll>mp;
        ll x; cin>>x;
        for(ll i=0;i<x;i++)
        {
            int k; cin>>k;
            mp[k]++;
        }
        int cnt=0;
        bool check=false;
        for(ll i=0;i<=x+1;i++)
        {
            if(mp[i]==0)
            {
                cnt++;
                if(cnt==2 or i==x+1)
                {
                    mex=max(mex,i);
                    check=true;
                }
            }
            if(check)break;
        }
    }
    //cout<<mex<<endl;
    ll ans=(min((mex+1),(m+1)))*mex;
    ll sum=(m*(m+1))>>1;
    ll bad=(mex*(mex+1))>>1;
    m-=mex;
    if(m>0)
    { 
        sum-=bad;
        ans+=sum;
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}