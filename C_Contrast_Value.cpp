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
    deque<int>v;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        v.pb(x);
    }
    if(n<3)
    {
        if(n==2)
        {
            if(abs(v[0]-v[1])==0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
            return;
        }
        else
        {
            cout<<1<<endl;
        }
        return;
    }
    vi res;
    while(v.size()>=3)
    {
        int a=v[0];
        int b=v[1];
        int c=v[2];
        if(abs(a-b)+abs(b-c)==abs(a-c))
        {
            v.erase(v.begin()+1);
        }
        else
        {
            res.pb(v[0]);
            v.pop_front();
        }
    }
    if (v.size() == 2)
    {
        if (abs(v[0] - v[1]) == 0)
        {
            res.pb(v[0]);
            v.clear();
        }
    }
    if(v.size()>0)
    {
        for(auto it:v)res.pb(it);
    }
    //for(auto it:res)cout<<it<<" ";cout<<endl;
    cout<<res.size()<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}