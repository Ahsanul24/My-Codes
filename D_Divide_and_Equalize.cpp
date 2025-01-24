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
const int N=1e6+10;
vector<bool>prime(N,true);
vi lp(N,0);
void solve()
{
    int n; cin>>n;
    vi v(n);
    loop cin>>v[i];
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int tem=v[i];
        while(tem!=1)
        {
            int prime_factor = lp[tem];
            while(tem%prime_factor==0)
            {
                tem/=prime_factor;
                m[prime_factor]++;
            }
        }
    }
    bool check=true;
    for(auto it:m)
    {
        if(it.s%n!=0)
        {
            check=false;
            break;
        }
    }
    if(check) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    // for(auto it:m)
    // {
    //     cout<<it.f<<" "<<it.s<<endl;
    // }
    // cout<<endl;
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
    test solve();
}