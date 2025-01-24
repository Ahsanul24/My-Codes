// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>order_set;
// find_by_order() - Returns an iterator to the k-th largest element(counting from zero)
// order_of_key() - The number of items in a set that are strictly smaller than our item
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define S second
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
void solve()
{
    string ss; cin>>ss;
    ll b=0,s=0,c=0;
    for(int i=0;i<(int)ss.size();i++)
    {
        b+=(ss[i]=='B');
        s+=(ss[i]=='S');
        c+=(ss[i]=='C');
    }
    ll i,j,k; cin>>i>>j>>k;
    ll n,m,o; cin>>n>>m>>o;
    ll tk; cin>>tk;
    ll l=0,r=1e13;
    ll ans=-1;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        ll b_lagbe=(mid*b);
        ll s_lagbe=(mid*s);
        ll c_lagbe=(mid*c);
        ll b_extra=0,s_extra=0,c_extra=0;
        if(b_lagbe>i)
        {
            b_extra=b_lagbe-i;
        }
        if (s_lagbe > j)
        {
            s_extra = s_lagbe - j;
        }
        if (c_lagbe > k)
        {
            c_extra = c_lagbe - k;
        }
        ll tk_lagbe=(b_extra*n)+(s_extra*m)+(c_extra*o);
        if(tk_lagbe<=tk)
        {
            l=mid+1;
            ans=mid;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<nl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}