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
    int n; cin>>n;
    vi v(n);
    loop cin>>v[i];
    vi g;
    for(int i=1;i<n;i++)
    {
        int gc=gcd(v[i-1],v[i]);
        g.pb(gc);
    }
    vi tem=g;
    srt(tem);
    if(tem==g)
    {
        cout<<"YES"<<endl;
        return;
    }
    int idx=-1;
    for(int i=0;i<g.size()-1;i++)
    {
        if(g[i]>g[i+1])
        {
            idx=i;
            break;
        }
    }
    vi a,b,c;
    for(int i=0;i<n;i++)
    {
        if(i==idx)continue;
        a.pb(v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i == idx+1)
            continue;
        b.pb(v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i == idx+2)
            continue;
        c.pb(v[i]);
    }
    vi kocu;
    for(int i=0;i<a.size()-1;i++)
    {
        int gg=gcd(a[i],a[i+1]);
        kocu.pb(gg);
    }
    vi tem_kocu=kocu;
    srt(tem_kocu);
    if(tem_kocu==kocu)
    {
        cout << "YES" << endl;
        return;
    }
    kocu.clear();
    for(int i=0;i<b.size()-1;i++)
    {
        int gg=gcd(b[i],b[i+1]);
        kocu.pb(gg);
    }
    tem_kocu.clear();
    tem_kocu=kocu;
    srt(tem_kocu);
    if(tem_kocu==kocu)
    {
        cout << "YES" << endl;
        return;
    }
    tem_kocu.clear();
    kocu.clear();
    for(int i=0;i<c.size()-1;i++)
    {
        int gg=gcd(c[i],c[i+1]);
        kocu.pb(gg);
    }
    tem_kocu=kocu;
    srt(tem_kocu);
    if(tem_kocu==kocu)
    {
        cout << "YES" << endl;
        return;
    }
    cout<<"NO"<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}