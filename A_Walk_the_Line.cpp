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
void solve(int x)
{
    ll n,k; cin>>n>>k;
    vl v(n);
    loop cin>>v[i];
    srt(v);
    if(n<=2)
    {
        if(v[0]<=k)
        {
            cout << "Case #" << x << ": " << "YES" << endl;
        }
        else
        {
            cout << "Case #" << x << ": " << "NO" << endl;
        }
        return;
    }
    ll sum=(v[0]*2)*(n-2);
    sum+=v[0];
    // for(int i=n-2;i>0;i--)
    // {
    //     sum+=(v[i]*2);
    // }
    if(sum<=k)
    {
        cout<<"Case #"<<x<<": "<<"YES"<<endl;
    }
    else
    {
        cout<<"Case #"<<x<<": "<<"NO"<<endl;  
    }
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve(i);
    }
}