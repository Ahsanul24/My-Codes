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
ll num(string x)
{
    stringstream h;
    ll kocu=0;
    h<<x;
    h>>kocu;
    return kocu;
}
void solve()
{
    int n; cin>>n;
    string a="9";
    string b="9";
    string c="9";
    for(int i=1;;i++)
    {
        string tem=a;
        tem+='9';
        string temm=b;
        temm+='0';
        if(num(a)%n==0 )
        {
            cout<<a<<endl;
            return;
        }
        else if(num(tem)%n==0)
        {
            cout<<tem<<endl;
            return;
        }
        else
        {
            a+='0';
        }
        if(num(b)%n==0)
        {
            cout<<b<<endl;
            return;
        }
        else if(num(temm)%n==0)
        {
            cout<<temm<<endl;
            return;
        }
        else
        {
            b+='9';
        }
        if(i&1)
        {
            c+='0';
            if(num(c)%n==0)
            {
                cout<<c<<endl;
                return;
            }
        }
        else
        {
            c+='9';
            if(num(c)%n==0)
            {
                cout<<c<<endl;
                return;
            }
        }
    }
}
int main()
{
    test solve();
}