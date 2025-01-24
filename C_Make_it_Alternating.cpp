// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MOD = 998244353;
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
ll factorial(int n)
{
    if(n==0 or n==1)return 1;
    else
    {
        return (n*(factorial(n-1)))%MOD;
    }
}
void solve()
{
    string s; cin>>s;
    vi v;
    int c=0;
    char ch=s[0];
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==ch)
        {
            c++;
        }
        else
        {
            v.pb(c);
            c=1;
            ch=s[i];
        }
    }
    if(c!=0)
    v.pb(c);
    int a=s.size()-v.size();
    cout<<a<<" ";
    ll sum=1;
    for(auto it:v)
    {
        sum=(sum*it)%MOD;
    }
    cout<<(sum*1ll*factorial(a))%MOD<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}
