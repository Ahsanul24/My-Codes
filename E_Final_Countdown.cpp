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
    vi pre;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(s[i]-'0');
        pre.pb(sum);
    }
    string res="";
    int carry=0;
    reverse(pre.begin(),pre.end());
    for(int i=0;i<n;i++)
    {
        int tem=pre[i]+carry;
        if(i==n-1)
        {
            string temp=to_string(tem);
            reverse(temp.begin(),temp.end());
            res+=(temp);
        }
        else
        {
            res+=to_string(tem%10);
            carry=tem/10;
        }
    }
    reverse(res.begin(),res.end());
    int idx=0;
    for(int i=0;i<res.size();i++)
    {
        if(res[i]!='0')
        {
            idx=i;
            break;
        }
    }
    if(idx>0)
    res.erase(res.begin(),res.begin()+idx);
    cout<<res<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}
