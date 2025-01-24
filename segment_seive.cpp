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
const int N=1e6+10;
vector<bool> prime(N,true);//do seive for fill this
vector<int>pp(int x)
{
    vector<int>tem;
    for(int i=2;i<=x;i++)
    {
        if(prime[i])
        {
            tem.push_back(i);
        }
    }
    return tem;
}
void solve()
{
    long long int l,r; cin>>l>>r;
    l=max(l,2LL);
    vector<int>all_prime=pp(sqrt(r));
    vector<bool>ans(r-l+1,true);
    for(long long int primes:all_prime)
    {
        long long int first_mul=(l/primes)*primes;
        if(first_mul<l)first_mul+=primes;
        for(long long int i=max(first_mul,primes*primes);i<=r;i+=primes)
        {
            ans[i-l]=false;
        }
    }
    for(int i=l;i<=r;i++)
    {
        if(ans[i-l])
        {
            cout<<i<<endl;
        }
    }
    cout<<endl;
}
int main()
{
    Ahsanul;
    prime[0]=prime[1]=false;
    for(ll i=2;i*i<=N;i++)
    {
        if(prime[i])
        {
            for(ll j=i*i;j<=N;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    test
    solve();
}