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
    int n; cin>>n;
    vi v(n);
    int gc=0;
    loop
    {
        cin>>v[i];
        gc=gcd(gc,v[i]);
    }
    if(n==1)
    {
        if(v[0]==1)cout<<0<<endl;
        else cout<<1<<endl;
        return;
    }
    vi copy1=v;vi copy2=v;
    copy1[n-1]=gcd(v[n-1],n);
    copy2[n-2]=gcd(v[n-2],n-1);
    int gcc=0,gccc=0;
    for(auto it:copy1)gcc=gcd(gcc,it);
    for(auto it:copy2)gccc=gcd(gccc,it);
    if(gc==1) cout<<0<<endl;
    else if(gcc==1)cout<<1<<endl;
    else if(gccc==1)cout<<2<<endl;
    else cout<<3<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}