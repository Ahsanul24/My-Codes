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
    int n,x,y; cin>>n>>x>>y;
    n--;
    int tem=x+y;
    if(tem==0)
    {
        cout<<-1<<endl;
        return;
    }
    int rem=n%tem;
    if(rem!=0 or (x>0 and y>0))
    {
        cout<<-1<<endl;
        return;
    }
    int win=1;
    bool key=true;
    int cnt=1,cntt=0;;
    vi v;
    while(cntt<n)
    {
        if(key)
        {
            for(int i=0;i<x;i++)
            {
                v.pb(win);
                cntt++;
            }
            if(cnt)
            {
                win=(win+x+1);
                cnt=0;
            }
            else
            {
                win=win+x;
            }
            key=false;
            if(v.size()==n)break;
        }
        else
        {
            for(int i=0;i<y and v.size()<n;i++)
            {
                v.pb(win);
                cntt++;
            }
            win=win+y;
            key=true;
        }
        if (v.size() == n)
            break;
    }
    for(auto it:v)cout<<it<<" ";cout<<endl;

}
int main()
{
    Ahsanul;
    test
    solve();
}