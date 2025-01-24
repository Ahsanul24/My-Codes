// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1e9+7
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
void solve()
{
    int n; cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    if(n&1)
    {
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<n<<" ";
        }
        else if(i%2==0)
        {
            cout<<n-(i-1)<<" ";
        }
        else 
        {
            cout<<i-1<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}