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
#define lcm(a, b) (a *1LL* b) / gcd(a, b)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pi 2*acos(0.0)
#define pr pair<ll, ll>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    ll n; cin>>n;
    vl div;
    for (ll i = 1; i * i <= n; i++)
    {
        if(n%i==0)
        {
            div.pb(i);
            if(i!=n/i)
            {
                div.pb(n/i);
            }
        }
    }
    srt(div);
    if((int)div.size()==1)
    {
        cout<<div[0]<<" "<<div[0]<<nl;
        return;
    }
    pr ans;
    ll maxi=LLONG_MAX;  
    for(int i=0;i<(int)div.size();i++)
    {
        ll a=div[i],b=n/div[i];
        if(lcm(a,b)==n)
        {
            if(max(a,b)<maxi)
            {
                maxi=max(a,b);
                ans={a,b};
            }
        }
    }
    cout<<ans.f<<" "<<ans.s<<nl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}