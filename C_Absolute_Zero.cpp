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
    vi v(n);
    bool odd=false,even=false;
    loop
    {
        cin>>v[i];
        if(v[i]&1)odd=true;
        if(!(v[i]&1))even=true;
    }
    if(odd and even)
    {
        cout<<-1<<endl;
        return;
    }
    srt(v);
    if(v[0]==0 and v[n-1]==0)
    {
        cout<<0<<endl;
        return;
    }
    int cnt=40;
    vi ans;
    w(cnt)
    {
        int x=(v[0]+v[n-1])/2;
        for(int i=0;i<n;i++)
        {
            int tem=abs(v[i]-x);
            v[i]=tem;
        }
        ans.pb(x);
        srt(v);
        if(v[0]==0 and v[n-1]==0)
        {
            break;
        }
    }
    cout<<ans.size()<<endl;
    print(ans);
}
int main()
{
    Ahsanul;
    test
    solve();
}