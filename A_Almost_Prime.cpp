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
const int N=3000;
vector<bool>prime(N,true);
vi divisor[N];
vi lp(N+100,0);
void solve()
{
    int n; cin>>n;
    int ans=0;
    for(int i=6;i<=n;i++)
    {
        if(divisor[i].size()==2)ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    prime[0]=prime[1]=false;
    for(int i=2;i<N;i++)
    {
        if(prime[i])
        {
            lp[i]=i;
            for(int j=i*2;j<N;j+=i)
            {
                prime[j]=false;
                if(lp[j]==0)
                {
                    lp[j]=i;
                }
            }
        }
    }
    for(int i=6;i<N;i++)
    {
        int num=i;
        while(num!=1)
        {
            int tem=lp[num];
            divisor[i].pb(tem);
            while(num%tem==0)
            {
                num/=tem;
            }
        }
    }
    solve();
}