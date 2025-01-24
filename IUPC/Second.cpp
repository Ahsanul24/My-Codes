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
vi possible={1,3,7};
int koto(int x,vi &v)
{
    int mot=0;
    for(int i=0;i<v.size();i++)
    {
        int lagbe=abs(x-v[i]);
        int sev=lagbe/7;
        int baki=lagbe-(7*sev);
        int three=baki/3;
        int tbaki=baki-(3*three);
        int one=tbaki;
        mot+=sev+three+one;
    }
    return mot;
}
void solve()
{
    int n; cin>>n;
    vi v(n);
    loop cin>>v[i];
    int ans=INT_MAX,idx=0;
    for(int i=-1000;i<=1000;i++)
    {
        int res=koto(i,v);
        ans=min(ans,res);
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
   // test
    solve();
}