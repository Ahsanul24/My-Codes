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
void solve()
{
    int n; cin>>n;
    map<int,ll>m;
    vi h(n+1,0);
    ll contri=0;
    ll ovi=0;
    for(int i=1;i<=n;i++)
    {
        int x,y; cin>>x>>y;
        h[y]++;
        int khali=n-i;
        ll dem=h[y];
        ll tem=max(ovi,dem)+khali;

        // ll kocu=max_element(h.begin(),h.end())-h.begin();
        //cout<<kocu<<" ";
        ll hauyya=dem-1;
        contri-=((hauyya*(hauyya-1))/2);
        contri+=((dem*(dem-1))/2);
        // cout<<contri<<" ";
        ll maxi=tem-khali;
        ovi=max(ovi,maxi);
        cout<<((tem*(tem-1))/2)-((maxi*(maxi-1))/2)+contri<<" ";
    }
    // for(auto &[g,h]:m)
    // {
    //     cout<<g<<" "<<h<<endl;
    // }
    cout<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}