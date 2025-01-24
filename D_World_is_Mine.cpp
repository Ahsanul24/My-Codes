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
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int n; cin>>n;
    vi v(n);
    map<int,int>m;
    set<int>s;
    loop
    {
        cin>>v[i];
        m[v[i]]++;
        s.insert(v[i]);
    }
    vi uni(s.begin(),s.end());
    int cnt=1,cntt=0;
    bool key=true;//for bob
    for(int i=1;i<uni.size();i++)
    {
        if(((m[uni[i]]-cntt)>cnt))
        {
            cnt++;
        }
        else if(((m[uni[i]]-cntt)<=cnt))
        {
            if ((cnt == cntt) or !key)
            {
                cnt++;
                key=true;
            }
            else
            {
                cntt++;
                key = false;
            }
        }
        //cout<<cnt<<" "<<cntt<<endl;
    }
    cout<<cnt<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}