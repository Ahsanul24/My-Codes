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
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int n,k; cin>>n>>k;
    vl h(n),p(n);
    loop cin>>h[i];
    loop cin>>p[i];
    vector<pr>v;
    loop v.pb({h[i],p[i]});
    srt(v);
    srt(h);
    for(int i=n-2;i>=0;i--)
    {
        v[i].s=min(v[i].s,v[i+1].s);
    }
    int temm=0;
    while(k>0)
    {
        int tem=upper_bound(h.begin(),h.end(),k+temm)-h.begin();//health minus kora ar k double kora ekoi
        if(tem==n)
        {
            cout<<"YES"<<endl;
            return;
        }
        temm += k;
        k-=v[tem].s;
    }
    cout<<"NO"<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}