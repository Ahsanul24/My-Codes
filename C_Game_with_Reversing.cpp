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
    string a,b; cin>>a>>b;
    if(a==b)
    {
        cout<<0<<endl;
        return;
    }
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)//even
    {
        if(a[i]!=b[i])cnt1++;
    }
    if(cnt1==1)
    {
        cout<<1<<endl;
        return;
    }
    reverse(a.begin(),a.end());
    for(int i=0;i<n;i++)//odd
    {
        if(a[i]!=b[i])cnt2++;
    }
    if(cnt2==0)
    {
        cout<<2<<endl;
        return;
    }
    if(cnt1&1)cnt1+=(cnt1-1);
    else cnt1*=2;
    if(cnt2&1)cnt2*=2;
    else cnt2+=(cnt2-1);
    cout<<min(cnt1,cnt2)<<endl;
    //cout<<cnt1<<" "<<cnt2<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}