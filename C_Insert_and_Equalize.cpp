// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define F first
#define S second
#define bit(a)   __builtin_popcount(a)
#define w(x) while(x--)
#define loop for(int i=0;i<n;i++)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define Ahsanul	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void solve()
{
    ll n; cin>>n;
    vl v(n);
    loop cin>>v[i];
    srt(v);
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    vl dif;
    for(int i=0;i<n-1;i++)
    {
        dif.pb(abs(v[i]-v[n-1]));
    }
    ll gc=dif[dif.size()-1];
    for(int i=0;i<dif.size()-1;i++)
    {
        gc=gcd(gc,dif[i]);
    }
    bool check=false;
    ll nai=0;
    for(int i=n-1;i>=1;i--)
    {
        if(v[i]-gc!=v[i-1])
        {
            nai=v[i]-gc;
            check=true;
            break;
        }
    }
    ll ans=0;
    if(check)
    {
        v.pb(nai);
    }
    else
    {
        v.pb(v[0]-gc);
    }
    srt(v);
    for(int i=0;i<n;i++)
    {
        ans+=((abs(v[i]-v[n]))/gc);
    }
    cout<<ans<<endl;
    // for(auto it:v)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}