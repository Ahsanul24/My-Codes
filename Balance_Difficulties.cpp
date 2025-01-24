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
#define en '\n';
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
    ll n,k;  cin>>n>>k;
    vl v(n);
    loop cin>>v[i];
    if(n==1)
    {
        cout<<0<<en;
        cout<<v[0]<<endl;
        return;
    }
    ll ans=LLONG_MAX;
    ll koto=-1;
    ll l=0,r=1e9;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        ll last=v[0]+mid;
        bool check=true;
        for(ll i=1;i<n;i++)
        {
            if(last+k<v[i]-mid)
            {
                check=false;
                break;
            }
            last=min(last+k,v[i]+mid);
        }
        if(check)
        {
            koto=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<koto<<endl;
    cout<<v[0]+koto<<" ";
    int last=v[0]+koto;
    for(ll i=1;i<n;i++)
    {
        ll tem = min(last+k,v[i]+koto);
        last=tem;
        cout<<tem<<" ";
    }
    cout<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}