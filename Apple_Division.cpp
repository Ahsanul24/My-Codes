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
#define nl '\n';
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
ll summ;
ll call(int idx,ll sum,vl &v,ll koto)
{
    if(idx>=v.size())
    {
        ll baki=abs(summ-koto);
        return abs(koto-baki);
    }
    // return min(call(idx+1,sum-v[idx],v),call(idx+1,sum,v));
    ll p=call(idx+1,abs(sum-v[idx]),v,koto+v[idx]);
    ll q=call(idx+1,sum,v,koto);
    return min(p,q);
}
void solve()
{
    int n; cin>>n;
    vl v(n);

    loop cin>>v[i];
    srt(v);
    summ=accumulate(v.begin(),v.end(),0LL);
    int ans=call(0,summ,v,0);
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
   // test
    solve();
}