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
#define f first
#define s second
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
const int N=2*1e5+10;
bool prime(int n)
{
    vector<bool>v(N,true);
    v[0]=v[1]=false;
    for(int i=0;i<N;i++)
    {
        if(v[i])
        {
            for(int j=i*2;j<N;j+=i)
            {
                v[j]=false;
            }
        }
    }
    return v[n];
}
void solve()
{
    int n; cin>>n;
    // vi p,np;
    // for(int i=1;i<=n;i++)
    // {
    //     if(prime(i))
    //     {
    //         p.pb(i);
    //     }
    //     else
    //     {
    //         np.pb(i);
    //     }
    // }
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    // np.erase(np.begin()+0);
    // reverse(p.begin(),p.end());
    // reverse(np.begin(),np.end());
    vi res(n+1,0);
    res[n/2+1]=1;
    res[1]=2;
    int k=n;
    for(int i=2;i<=n;i++)
    {
        if(i==n/2+1)
        {
            continue;
        }
        else
        {
            if(k!=2)
            {
                res[i]=k;
                k--;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    // for(auto it:p)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}