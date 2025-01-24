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
const int N=1e7+10;
vector<int>prime(N,0);
vector<int>l(N),r(N);
void solve()
{
    int n,m; cin>>n>>m;
    vl a(n),b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        int x=a[i];
        while(x>1)
        {
            l[prime[x]]++;
            x/=prime[x];
        }
    }
    vl ans_b;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        int x=b[i];
        ll ans=1;
        while(x>1)
        {
            if(l[prime[x]])
            {
                r[prime[x]]++;
                l[prime[x]]--;
                x/=prime[x];
            }
            else
            {
                ans*=prime[x];
                x/=prime[x];
            }
        }
        ans_b.pb(ans);
    }
    vi ans_a;
    for(int i=0;i<n;i++)
    {
        int x=a[i];
        ll ans=1;
        while(x>1)
        {
            if(r[prime[x]])
            {
                r[prime[x]]--;
                x/=prime[x];
            }
            else
            {
                ans*=prime[x];
                x/=prime[x];
            }
        }
        ans_a.pb(ans);
    }
    cout<<(int)ans_a.size()<<" "<<(int)ans_b.size()<<nl;
    for(auto it:ans_a)cout<<it<<" ";cout<<nl;
    for(auto it:ans_b)cout<<it<<" ";cout<<nl;
}
int main()
{
    Ahsanul;
    for(ll i=2;i<=N;i++)
    {
        if(!prime[i])
        {
            prime[i]=i;
            for(ll j=i*i;j<=N;j+=i)
            {
                prime[j]=i;
            }
        }
    }
 //   test
    solve();
}