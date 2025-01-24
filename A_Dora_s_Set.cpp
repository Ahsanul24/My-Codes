// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcountll(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
bool prime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int l,r; cin>>l>>r;
    deque<int> p,ev,od;
    for(int i=l;i<=r;i++)
    {
        // if(prime(i))
        // {
        //     p.pb(i);
        // }
        if(i&1)
        {
            od.pb(i);
        }
        else
        {
            ev.pb(i);
        }
    }
    if(p[0]==2)
    {
        p.pop_front();
    }
    int a=p.size(),b=ev.size(),c=od.size();
   // cout<<a<<" "<<b<<" "<<c<<endl;
    // int ans=min({a,b,c});
    // a-=ans;b-=ans;c-=ans;
    // int tem=a/2;
    // ans+=tem;
    // if(a>0)a-=tem;
    // if(b>0)b-=tem;
    // if(c>0)c-=tem;  
    // cout<<ans<<endl;
    cout<<c/2<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}