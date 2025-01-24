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
    vi v;
    map<int, vi> num;
    map<char, vi> ca;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        v.pb(x);
        num[x].pb(i);
    }
    int  q; cin>>q;
    w(q)
    {
        ca.clear();
        bool check=true;
        string s; cin>>s;
        if(s.size()!=n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            ca[s[i]].pb(i);
        }
        for(auto it:num)
        {
            vi tem=it.s;
            if(tem.size()<2)
            {
                continue;
            }
            char kocu=s[tem[0]];
            for(int i=1;i<tem.size();i++)
            {
                if(s[tem[i]]!=kocu)
                {
                    check=false;
                    break;
                }
            }
        }
        if(!check)
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool muni=true;
        for(auto it:ca)
        {
            vi tem=it.s;
            if(tem.size()<2)
            {
                continue;
            }
            int num=v[tem[0]];
            for(int i=1;i<tem.size();i++)
            {
                if(v[tem[i]]!=num)
                {
                    muni=false;
                    break;
                }
            }
        }
        if(!muni)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
}
int main()
{
    Ahsanul;
    test
    solve();
}