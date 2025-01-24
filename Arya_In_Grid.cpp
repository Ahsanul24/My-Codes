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
    ll n,m,x,y,l; cin>>n>>m>>x>>y>>l;
    ll dan=0,bam=0,upore=0,nice=0;
    dan=((m-y)/l);
    bam=((y-1)/l);
    upore=((x-1))/l;
    nice=((n-x)/l);
    // if(dan<0)dan=0;
    // if(bam<0)bam=0;
    // if(upore<0)upore=0;
    // if(nice<0)nice=0;
    ll gun=(dan+bam);
    ll gunn=(upore+nice);
    ll res=(gun+gunn)+(gun*gunn)+1;
    //cout<<dan<<bam<<upore<<nice<<endl;
    cout<<res<<endl;
}
int main()
{
    test solve();
}
