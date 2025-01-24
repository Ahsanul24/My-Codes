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
    int n,m,k; cin>>n>>m>>k;
    vi a(k+1,0),b(k+1,0);
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(x<=k)
        {
            a[x]++;
        }
    }
    for(int i=0;i<m;i++)
    {
        int x; cin>>x;
        if(x<=k)
        {
            b[x]++;
        }
    }
    int cnt1=0,cnt2=0;
    bool check1=true,check2=true;
    for(int i=1;i<=k;i++)
    {
        if(!a[i] and b[i])
        {
            cnt1++;
        }
        if(!a[i] and !b[i])
        {
            check1=false;
            break;
        }
    }
    int cnt3=0,cnt4=0;
    for (int i = 1; i <= k; i++)
    {
        if(!b[i] and a[i])
        {
            cnt2++;
        }
    }
    for(int i=1;i<=k;i++)
    {
        if(a[i] and b[i])
        {
            if(cnt1<k/2)cnt1++;
            else if(cnt2<k/2)cnt2++;
        }
    }
    if((cnt1==k/2 or cnt2==k/2) and check1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    // for(auto it:a)cout<<it<<" ";cout<<endl;
    // for(auto it:b)cout<<it<<" ";cout<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}