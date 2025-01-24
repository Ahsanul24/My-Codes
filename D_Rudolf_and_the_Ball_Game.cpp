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
    int n,m,x; cin>>n>>m>>x;
    vi v(0,x);
    int cnt=0;
    w(m)
    {
        int dis; cin>>dis;
        char ch; cin>>ch;
        vi temp;
        if(ch=='0' or ch=='?')
        {
            if(cnt==0)
            {
                int mod=dis%n;
                int koto=x+mod;
                if(koto>n)
                {
                    koto%=n;
                }
                temp.pb(koto);
            }
            else
            {
                for(int i=0;i<v.size();i++)
                {
                    int mod=dis%n;
                    int koto=v[i]+mod;
                    if(koto>n)
                    {
                        koto%=n;
                    }
                    temp.pb(koto);
                }
            }
        }
        if(ch=='1' or ch=='?')
        {
            if(cnt==0)
            {
                int mod=dis%n;
                int koto=x-mod;
                if(koto<=0)
                {
                    koto=n+koto;
                }
                temp.pb(koto);
            }
            else
            {
                for(int i=0;i<v.size();i++)
                {
                    int mod=dis%n;
                    int koto=v[i]-mod;
                    if(koto<=0)
                    {
                        koto=n+koto;
                    }
                    temp.pb(koto);
                }
            }
        }
        // if(cnt==0)
        // {
        //     for(auto it:temp)cout<<it<<" ";
        // }
        // cout<<endl;
        srt(temp);
        temp.resize(unique(temp.begin(),temp.end())-temp.begin());
        cnt++;
        v.empty();
        v=temp;
    }
    //for(auto it:v)cout<<it<<" ";cout<<endl;cout<<endl;
    // srt(v);
    // int tem=unique(v.begin(),v.end())-v.begin();
    // cout<<tem<<endl;
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}
