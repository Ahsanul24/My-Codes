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
    vi v;
    for(int i=0;i<=30;i++)
    {
        if(n&(1<<i))
        {
            v.pb(1);
        }
        else
        {
            v.pb(0);
        }
    }
    reverse(v.begin(),v.end());
    int idx=0;
    for(int i=0;i<31;i++)
    {
        if(v[i]==1)
        {
            idx=i;
            break;
        }
    }
    vi tem;
    for(int i=idx;i<31;i++)tem.pb(v[i]);
    reverse(tem.begin(),tem.end());
    int mun=0;
    for(int i=0;i<tem.size();i++)
    {
        if(tem[i]==1)
        {
            mun=i;break;
        }
    }
    ll ans=0,curr=0;
    int k=0;
    for(int i=mun;i<tem.size();i++)
    {
        if(tem[i]==0)
        {
            tem[i] = 1;
            ans+=curr;
            curr=pow(2,i);
        }
        else
        {
            if(curr==0)
            {
                curr=pow(2,i);
            }
        }
    }
    // for(int i=tem.size()-1;i>=0;i--)
    // {
    //     cout<<tem[i]<<" ";
    // }
    // cout<<endl;
    cout<<ans<<endl;
}
int main()
{
    test solve();   
}