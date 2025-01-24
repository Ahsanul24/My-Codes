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
    string hour="";
    string mini="";
    hour+=s[0];
    hour+=s[1];
    mini+=s[3];
    mini+=s[4];
    int hourr=stoi(hour);
    int minit=stoi(mini);
    if(hourr>12)
    {
        int cng=hourr-12;
        if(cng<10)
        {
            cout<<"0"<<cng<<":"<<mini<<" PM"<<endl;
        }
        else
        {
            cout<<cng<<":"<<mini<<" PM"<<endl;
        }
        return;
    }
    if(hourr==12)
    {
        cout<<hour<<":"<<mini<<" PM"<<endl;
        return;
    }
    if(hour=="00")
    {
        cout<<"12:"<<mini<<" AM"<<endl;
        return;
    }
    cout<<s<<" AM"<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}