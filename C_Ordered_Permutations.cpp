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
void call(int l,int r,vi &v,int curr,int k)
{
    if(l==r)
    {
        v[l]=curr;
        return;
    }
    int sz=(r-l-1);
    if(sz<60 and (1LL<<sz)<k)
    {
        v[r]=curr;
        call(l,r-1,v,curr+1,k-(1LL<<sz));
    }
    else
    {
        v[l]=curr;
        call(l+1,r,v,curr+1,k);
    }
}
void solve()
{
    ll n,k; cin>>n>>k;
    if((n-1<60)and(1LL<<(n-1))<k)
    {
        cout<<-1<<nl;
        return;
    }
    vi v(n);
    call(0,n-1,v,1,k);
    print(v);
}
int main()
{
    Ahsanul;
    test
    solve();
}