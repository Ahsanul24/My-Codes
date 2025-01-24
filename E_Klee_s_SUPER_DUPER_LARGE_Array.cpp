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
ll call(ll r,ll bad)
{
    return (r * (r + 1)) / 2-bad;
}
void solve()
{
    ll n,b; cin>>n>>b;
    ll l=b,r=b+n-1;
    ll num=r-l+1;
    ll a=l-1;
    ll gog=(r*(r+1))/2;
    ll bad=(a*(a+1))/2;
    ll mot=gog-bad;
    ll banatehobe=(mot+1)/2;
    ll low=num/2,high=num;
    while(low<=high)
    {
        ll mid=(low+high)/2;
        ll notun=l+mid-1;
        if(call(notun,bad)<=banatehobe)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    ll kocu_l=l+low-1,kocu_r=l+high-1;
    ll ans_1=call(kocu_l,bad),ans_2=call(kocu_r,bad);
    ll ans_11=mot-ans_1,ans_22=mot-ans_2;
    cout<<min(abs(ans_11-ans_1),abs(ans_22-ans_2))<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}