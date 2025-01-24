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
    int n,q; cin>>n>>q;
    vl v(n);
    loop cin>>v[i];
    vl maxi(n);
    maxi[0]=v[0];
    for(int i=1;i<n;i++)
    {
        maxi[i]=max(maxi[i-1],v[i]);
    }
    //for(auto it:maxi)cout<<it<<" ";cout<<endl;
    vl pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+v[i];
    }
    w(q)
    {
        int x; cin>>x;
        int idx=upper_bound(maxi.begin(),maxi.end(),x)-maxi.begin();
        idx--;
        if(idx<0)
        {
            cout<<0<<" ";
            continue;
        }
        //cout<<idx<<" ";
        cout<<pre[idx]<<" ";
    }
    cout<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}