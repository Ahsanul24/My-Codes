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
    string s; cin>>s;
    vi v(n);
    loop cin>>v[i];
    int ans=0;
    int val=0,idx=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
        {
            if(s[i]=='0' and s[i+1]=='1')
            {
                s[i]='1';
                s[i+1]='0';
                val=v[i+1];
                idx=i+2;
            }
            if(s[i]=='1' and s[i+1]=='1')
            {
                if(val>v[i+1])
                {
                    int cnt=count(s.begin()+idx,s.begin()+i+1,'1');
                    if(((i-idx+1)==cnt))
                    {
                        s[idx-1]='1';
                        s[i+1]='0';
                    }
                }
            }
        }
        if(s[i]=='0')
        {
            val=v[i];
            idx=i+1;
        }
    }
    //cout<<s<<endl;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')ans+=v[i];
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}