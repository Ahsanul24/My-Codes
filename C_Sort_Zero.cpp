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
    loop cin>>v[i];
    vi tem=v;
    srt(tem);
    if(tem==v)
    {
        cout<<0<<endl;
        return;
    }
    int ind=0;
    for(int i=n-1;i>0;i--)
    {
        if(v[i]<v[i-1])
        {
            ind=i;
            break;
        }
    }
    vi thikache;
    for(int i=ind;i<n;i++)
    {
        thikache.pb(v[i]);
    }
    int bad=0;
    set<int>s;
    for(int i=0;i<ind;i++)
    {
        int temm=v[i];
        s.insert(temm);
        if(find(thikache.begin(),thikache.end(),temm)!=thikache.end())
        {
            int kocu=find(thikache.begin(),thikache.end(),temm)-thikache.begin();
            bad=max(bad,kocu);
        }
    }
    for(int i=0;i<bad;i++)
    {
        s.insert(thikache[i]);
    }
    cout<<s.size()<<endl;
    // for(auto it:thikache)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}