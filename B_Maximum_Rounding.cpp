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
    string res=s;
    s="0"+s;
    int idx=0;
    bool check=false;
    for(int i=s.size()-2;i>=0;)
    {
        if(s[i]=='9')
        {
            s[i+1]='0';
            while(!(s[i]<'9'))
            {
                s[i]='0';
                i--;
            }
            s[i]=s[i]+1;
            idx=i;
            check=true;
            res=s;
            i--;
            continue;
        }
        else if(s[i+1]>='5')
        {
            s[i]=s[i]+1;
            s[i+1]='0';
            idx=i;
            check=true;
            res=s;
            i--;
        }
        else i--;
    }
    for(int i=idx+1;i<res.size() and check;i++)
    {
        res[i]='0';
    }
    if(res[0]=='0')
    {
        res.erase(res.begin()+0);
    }
    cout<<res<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}