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
    ll sum=0;
    for(int i=1;i<n;i++)
    {
        vl v1,v2;
        for(int j=1;j<i;j++)v1.pb(j);
        for(int k=1;k<=n;k++)v2.pb(k);
        reverse(v2.begin(),v2.end());
        for(auto it:v2)v1.pb(it);
        //for(auto it:v1)cout<<it<<" ";cout<<endl;
        ll tem_sum=0;
        ll maxi=INT_MIN;
        for(int k=1;k<=n;k++)
        {
            tem_sum+=(k*v1[k-1]);
            maxi=max(maxi,k*v1[k-1]);
        }
        sum=max(sum,tem_sum-maxi);
    }
    cout<<sum<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}