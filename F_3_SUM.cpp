// Bismillahir Rahmanir Raheem
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
    int n; cin>>n;
    vi koibar(10,0),v;
    loop
    {
        int a; cin>>a;
        int tem=a%10;
        if(koibar[tem]<3)
        {
            koibar[tem]++;
        }
    }
    for(int i=0;i<10;i++)
    {
        w(koibar[i])
        {
            v.pb(i);
        }
    }
    bool check=false;
    for(int i=0;i<v.size()-2;i++)
    {
        for(int j=i+1;j<v.size()-1;j++)
        {
            for(int k=j+1;k<v.size();k++)
            {
                int sum=v[i]+v[j]+v[k];
                if(sum%10==3){check=true;break;}
            }
        }
    }
    if(check)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    //matha gece reeeeeeeeeeeeeee
    // for(auto it:v)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}
// last few days of my life.I wish if everyone remembers me!!!!!!!!!!!!!!!!!!!!!!!!