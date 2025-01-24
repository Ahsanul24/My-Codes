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
    vi soja,ulta(n);
    soja.pb(0);
    soja.pb(1);
    for(int i=1;i<n-1;i++)
    {
        int ff=abs(v[i]-v[i+1]);
        int bb=abs(v[i]-v[i-1]);
        if(ff<bb)soja.pb(1);
        else soja.pb(ff);
    }
    ulta[n-1]=0;
    ulta[n-2]=1;
    int j=n-3;
    for(int i=n-2;i>0;i--)
    {
        int ff=abs(v[i]-v[i-1]);
        int bb=abs(v[i]-v[i+1]);
        if(ff<bb)
        {
            ulta[j]=1;
            j--;
        }
        else
        {
            ulta[j]=ff;
            j--;
        }
    }
    for(int i=1;i<n;i++)soja[i]=soja[i]+soja[i-1];
    for(int i=n-2;i>=0;i--)ulta[i]=ulta[i]+ulta[i+1];
    int q;cin>>q;
    w(q)
    {
        int a,b; cin>>a>>b;
        if(a<b)
        {
            cout<<soja[b-1]-soja[a-1]<<endl;
        }
        else
        {
            cout<<ulta[b-1]-ulta[a-1]<<endl;
        }
    }
}
int main()
{
    Ahsanul;
    test solve();
}