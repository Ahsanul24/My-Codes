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
    ll n,k,b,s; cin>>n>>k>>b>>s;
    vi p(n),a(n);
    loop cin>>p[i];
    loop cin>>a[i];
    ll boda=0,sasa=0;
    vector<bool>visb(n,false),viss(n,false);
    vi bodapabe,sasapabe;
    while(!visb[b-1])
    {
        bodapabe.pb(a[b-1]);
        visb[b-1]=true;
        b=p[b-1];
    }
    while(!viss[s-1])
    {
        sasapabe.pb(a[s-1]);
        viss[s-1]=true;
        s=p[s-1];
    }
    //for(auto it:bodapabe)cout<<it<<" ";cout<<endl;
    //for(auto it:sasapabe)cout<<it<<" ";cout<<endl;
    ll currb=0,currs=0;
    for(ll i=0;i<(min((ll)bodapabe.size(),k));i++)
    {
        boda=max(boda,currb+bodapabe[i]*(k-i));
        currb+=bodapabe[i];
    }
    for (ll i = 0; i < (min((ll)sasapabe.size(), k)); i++)
    {
        sasa = max(sasa, currs + sasapabe[i] * (k - i));
        currs += sasapabe[i];
    }
    //cout<<boda<<" "<<sasa<<endl;
    if(boda==sasa)
    {
        cout<<"Draw"<<endl;
        return;
    }
    if(boda>sasa)cout<<"Bodya"<<endl;
    else cout<<"Sasha"<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}