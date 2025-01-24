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
    bool check=false;
    ll sum=0;
    loop
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%3==0)
    {
        cout<<0<<endl;
        return;
    }
    if((n==1 and v[0]%3!=0) or (sum+1)%3==0)
    {
        cout<<1<<endl;
        return;
    }
    int cnt=0;
    // ll tem=sum;
    // while(tem%3!=0)
    // {
    //     tem++;
    //     cnt++;
    // }
    for(int i=0;i<n;i++)
    {
        if((sum-v[i])%3==0)
        {
            check=true;
        }
    }
    if(check)cout<<1<<endl;
    else cout<<2<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}