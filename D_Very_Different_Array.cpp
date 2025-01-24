// IN THE NAME OF ALLAH
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
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    ll n,m; cin>>n>>m;
    deque<ll> a(n),b(m);
    loop cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    srt(a);
    rsrt(b);
    ll sum=0;
    for(int i=0;a.size()>0;i++)
    {
        ll tem=abs(a[0]-b[0]);
        ll temm=abs(a[a.size()-1]-b[b.size()-1]);
        if(tem>temm)
        {
            sum+=tem;
            a.pop_front();
            b.pop_front();
        }
        else
        {
            sum+=temm;
            a.pop_back();
            b.pop_back();
        }
    }
    // cout<<a.size()<<endl;
    cout<<sum<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}