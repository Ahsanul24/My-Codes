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
    string s;
    int key=0;
    while (cin>>s)
    {
        int n=s.size();
        int idx;
        if (n % 2 == 0)
        {
            idx = n / 2;
        }
        else
        {
            idx = (n / 2) + 1;
        }
        if(!key)
        {
            for(int i=0;i<idx;i++)
            {
                s[i]=toupper(s[i]);
            }
            key^=1;
        }
        else
        {
            for(int i=idx;i<n;i++)
            {
                s[i]=toupper(s[i]);
            }
            key^=1;
        }
        cout<<s<<" ";
    }
    
}
int main()
{
    Ahsanul;
//    test
    solve();
}