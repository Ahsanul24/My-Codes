// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define F first
#define S second
#define bit(a)   __builtin_popcount(a)
#define w(x) while(x--)
#define loop for(int i=0;i<n;i++)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define Ahsanul	(ios_base::sync_with_stdio(false),cin.tie(NULL))
const int N = 1e5+10;
vector<int>divisors[N];
vi lp(N, 0), hp(N, 0);
void solve()
{
    vector<bool>v(N,true);
    v[0]=v[1]=0;
    for(int i=2;i<=N;i++)
    {
        if(v[i])
        {
            hp[i]=lp[i]=i;///for prime number///
            for(int j=i*2;j<=N;j+=i)
            {
                v[j]=false;
                hp[j]=i;
                if(lp[j]==0)
                {
                    lp[j]=i;
                }
            }
        }
    }
    // for(int i=1;i<=5;i++)
    // {
    //     cout<<lp[i]<<" "<<hp[i]<<endl;
    // }
    cout<<lp[16];
    /********************prime factor************************/
    int num;cin>>num;
    vi prime_factors;
    while(num!=1)
    {
        int prime_factor = lp[num];
        while(num%prime_factor==0)
        {
            num/=prime_factor;
            prime_factors.pb(prime_factor);
        }
    }
    for(auto it:prime_factors)
    {
        cout<<it<<" ";
    }
    // /*************divisors****************/
    // for(int i=2;i<N;i++)
    // {
    //     for(int j=i;j<N;j+=i)
    //     {
    //         divisors[j].pb(i);
    //     }
    // }
    // for(int i=99;i<100;i++)
    // {
    //     for(auto it:divisors[i])
    //     {
    //         cout<<it<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<lp[840];
}
int main()
{
    Ahsanul;
    solve();
}