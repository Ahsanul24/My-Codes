// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test  \
    int t;    \
    cin >> t; \
    for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
const int N=1e5;
vi all;
///////// Mathar vitore gaja gure///////////
bool bin(string s)
{
    return (count(s.begin(),s.end(),'1')+count(s.begin(),s.end(),'0')==s.size());
}
void solve()
{
    int n;
    cin >> n;
    if(find(all.begin(),all.end(),n)!=all.end())
    {
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<all.size();i++)
    {
        while(n%all[i]==0)
        {
            n/=all[i];
        }
    }
    if(n==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main()
{
    Ahsanul;
    for (int i = 2; i <= 100000; i++)
    {
        if (bin(to_string(i)))
        {
            all.pb(i);
        }
    }
    test
    solve();
}