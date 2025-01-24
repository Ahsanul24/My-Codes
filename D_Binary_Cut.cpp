// IN THE NAME OF ALLAH
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
    string s; cin>>s;
    string tem=s;
    srt(tem);
    if(tem==s)
    {
        cout<<1<<endl;
        return;
    }
    bool check=true;
    int cnt=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(check and s[i]=='0' and s[i+1]=='1')//fast 01 sorted
        {
            check=false;
        }
        if(s[i]!=s[i+1])cnt++;
    }
    if(check)
    {
        cnt++;
    }
    cout<<cnt<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}