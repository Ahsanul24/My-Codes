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
    int n,m,k; cin>>n>>m>>k;
    vi a(n);
    loop cin>>a[i];
    vi b(m);
    for(int i=0;i<m;i++)cin>>b[i];
    map<int,int>com,unused,bcop;
    int match=0;
    for(int i=0;i<m;i++)
    {
        bcop[b[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        if(bcop[a[i]]>0)
        {
            match++;
            com[a[i]]++;
            bcop[a[i]]--;
        }
        else
        {
            unused[a[i]]++;
        }
    }
    int ans=0;
    if(match>=k)ans++;
    for(int i=m;i<n;i++)
    {
        if(bcop[a[i]]>0)
        {
            match++;
            com[a[i]]++;
            bcop[a[i]]--;
        }
        else
        {
            unused[a[i]]++;
        }
        if(unused[a[i-m]]>0)
        {
            unused[a[i-m]]--;
        }
        else
        {
            match--;
            bcop[a[i-m]]++;
            com[a[i-m]]--;
        }
        if(match>=k)ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}