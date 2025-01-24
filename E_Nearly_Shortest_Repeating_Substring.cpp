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
    set<int>div;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            div.insert(i);
            div.insert(n/i);
        }
    }
    string s; cin>>s;
    ll pri=INT_MAX;
    for(auto it:div)
    {
        string tem=s.substr(0,it);
        string full="";
        string next_tem = s.substr(n - it, it);
        string next_full = "";
        for(int i=1;i<=n/it;i++)
        {
            full+=tem;
            next_full+=next_tem;
        }
        ll cnt=0,ans=LLONG_MAX;
        for(int i=0;i<n;i++)
        {
            if(full[i]!=s[i])
            {
                cnt++;
            }
            if(cnt>1)break;
        }
        if(cnt<=1)
        {
            ans=it;
        }
        int cntt=0;
        for(int i=0;i<n;i++)
        {
            if(next_full[i]!=s[i])cntt++;
            if(cntt>1)break;
        }
        ll anss=LLONG_MAX;
        if(cntt<=1)
        {
            anss=it;
        }
        pri=min(pri,min(ans,anss));
    }
    cout<<pri<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}