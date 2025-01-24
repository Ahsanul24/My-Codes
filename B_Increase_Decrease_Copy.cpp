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
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int n;
    cin>>n;
    vi a(n),b(n+1);
    loop cin>>a[i];
    for(int i=0;i<=n;i++)cin>>b[i];
    int last=b[n];
    ll cnt=0;
    bool check=false;
    for(int i=0;i<n;i++)
    {
        if(a[i]==last)
        {
            check=true;
        }
        cnt+=abs(a[i]-b[i]);
    }
    if(check)//case 1
    {
        cout<<cnt+1<<endl;
        return;
    }
    bool ok=false;
    for(int i=0;i<n;i++)
    {
        if((a[i]>last and b[i]<last) or (a[i]<last and b[i]>last))
        {
            ok=true;
            break;
        }
    }
    if(ok)//case 2
    {
        cout<<cnt+1<<endl;
        return;
    }
    int koto=INT_MAX;
    for(int i=0;i<n;i++)
    {
        koto=min(koto,min(abs(last-a[i]),abs(last-b[i])));
    }
    cout<<cnt+koto+1<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}