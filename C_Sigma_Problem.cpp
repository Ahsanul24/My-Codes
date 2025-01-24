// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1e8;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
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
    ll n; cin>>n;
    vl v(n);
    loop cin>>v[i];
    srt(v);//sort doesn't effect in ans//1 2 3 4 and 4 1 2 3 will give same ans
    //mod is appllied only when sum>1e8
    ll sum=accumulate(v.begin(),v.end(),0LL);
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]<50000000)
        {
            if(v[i]+v[n-1]>=10000000)
            {
                cnt+=(v.end()-lower_bound(v.begin(),v.end(),10000000-v[i]));
            }
        }
        else
        {
            cnt+=n-i-1;
        }
    }
    //cout<<cnt<<endl;
    cout<<sum*1ll*(n-1)-10000000*cnt;
}
int main()
{
    Ahsanul;
    //test
    solve();
}