// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<double>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (double i = 0; i < n; i++)
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
    double n,b,h; cin>>n>>b>>h;
    vi v(n);
    loop cin>>v[i];
    double ans=0;
    double area=0.5*b*h;
    ans=n*area;
    for(int i=0;i<n-1;i++)
    {
        if(abs(v[i]-v[i+1])<h)
        {
            double dif=v[i+1]-v[i];
            double temh=h-dif;
            double temp=(temh*b)/h;
            double bad=0.5*temh*temp;
            ans-=bad;
        }
    }
    cout<<fixed<<ans<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}