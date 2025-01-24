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
    string a,b; cin>>a>>b;
    if(a==b){cout<<a<<endl;cout<<b<<endl;return;}
    string choto,boro;
    int idx=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]-'0'==b[i]-'0')continue;
        if(a[i]-'0'<b[i]-'0')
        {
            choto=a;
            boro=b;
            break;
        }
        else
        {
            choto=b;
            boro=a;
            break;
        }
    }
    for(int i=0;i<a.size();i++)
    {
        if(choto[i]-'0'<boro[i]-'0')
        {
            idx=i;
            break;
        }
    }
    for(int i=idx+1;i<a.size();i++)
    {
        if(choto[i]-'0'<boro[i]-'0')
        {
            swap(choto[i],boro[i]);
        }
    }
    cout<<boro<<endl;
    cout<<choto<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}