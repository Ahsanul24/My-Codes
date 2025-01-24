// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
const int N=1e5+10;
vector<bool>prime(N,true);
int power(int a, int b)
{
   int res = 1;
   while (b)
    {
       if (b & 1)
        {
            res = (res * 1ll * a) % MOD;
        }
        a = (a * 1ll * a) % MOD;
        b >>= 1;
    }
    return res;
}
void solve()
{
    prime[0]=prime[1]=false;
    for(int i=2;i<N;i++)
    {
        if(prime[i])
        {
            for(int j=2*i;j<N;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    ll n; cin>>n;
    vl v(n);
    ll one=0,p=0;
    loop
    {
        cin>>v[i];
        one+=(v[i]==1);
        p+=(prime[v[i]]);
    }
    if(one<2)
    {
        cout<<0<<endl;
        return;
    }
    ll res=((one*(one-1))/2)*p;
    cout<<res<<endl;
}
int main()

{
    Ahsanul;
    test solve();
}