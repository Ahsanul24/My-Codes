// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>order_set;
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
void solve()
{
    ll n,x,y; cin>>n>>x>>y;
    vl v(n);
    loop cin>>v[i];
    ll tot=accumulate(v.begin(),v.end(),0LL);
    if(tot<=x)
    {
        cout<<0<<nl;
        return;
    }
    srt(v);
    ll ans=0;
    ll nice=tot-y;
    ll upore=tot-x;
    for(int i=0;i<n-1;i++)
    {
        ll tem_nice=nice-v[i];
        ll tem_upore=upore-v[i];
        //if(tem_nice<0 or tem_upore<0)continue;
        //cout << tem_nice << " " << tem_upore << nl;

        int idx=lower_bound(v.begin()+i+1,v.end(),tem_nice)-v.begin();
        // if(idx-1>=0)
        // {
        //     if(tot-(v[i]+v[idx])>=tem_nice)idx--;
        // }
        int idxx=upper_bound(v.begin()+i+1,v.end(),tem_upore)-v.begin();
        // if(tot-(v[i]+v[idxx])<upore)
        // {
        //     idxx--;
        // }
        // if(idxx>=n)idxx=n-1;
        // if(idx<=i)
        // {
        //     idx=i+1;
        // }
        //cout << idx << " " << idxx << nl;

        if((idxx-idx)>=0)ans+=((idxx-idx));//sauyya heda madarcod
        //cout<<nl;
    }
    cout<<ans<<nl;
}
int main()
{
    Ahsanul;
    test
    solve();
}