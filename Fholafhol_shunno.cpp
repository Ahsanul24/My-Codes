// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
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
#define PI 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
bool check(int n, int b)
{
    int zero=0;
    if(n%b==0 and n>0)
    {
        return true;
    } 
    if(zero)return true;
    else return false;
}
int koita(int n)
{
    int ans=0;
    for(int i=2;i<=n;i++)
    {
        if(check(n,i))ans++;
    }
    return ans;
}
void solve()
{
    int n; cin>>n;
    vi v(n);
    loop cin>>v[i];
    for(int i=0;i<n;i++)
    {
        cout<<koita(v[i])<<" ";
    }
    cout<<endl;
}
int main()
{
    Ahsanul;
    solve();
}