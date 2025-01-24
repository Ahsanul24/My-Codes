// Bismillahir Rahmanir Raheem
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
    int choto=INT_MAX,boro=INT_MIN;
    vi nai;
    w(n)
    {
        int a,b; cin>>a>>b;
        if(a==1)
        {
            boro=max(boro,b);
        }
        else if(a==2)
        {
            choto=min(choto,b);
        }
        else
        {
            nai.pb(b);
        }
    }
    srt(nai);
    ll temm=lower_bound(nai.begin(),nai.end(),boro)-nai.begin();
    // if (nai[temm] == boro)
    //     temm++;
    ll temmm=upper_bound(nai.begin(),nai.end(),choto)-nai.begin();
    ll bad=temmm-temm;
    // if(nai[temmm-1]==choto)temmm--;
    // ll kocu=nai.size()-temmm;
    // int ans=0;
    ll tem=choto-boro+1;
    // ans=tem-(nai.size()-(temm+kocu));
    // if(ans<0)ans=0;
    // cout<<ans<<endl;
    // cout<<choto<<" "<<boro<<endl;
    // for(auto it:nai)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<nai.size();i++)
    // {
    //     if(boro<=nai[i] and choto>=nai[i])tem--;
    // }
    // if(tem<0)tem=0;
    // cout<<tem<<endl;
    cout<<max(0ll,tem-bad)<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}