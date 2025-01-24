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
#define F first
#define S second
#define bit(a)   __builtin_popcount(a)
#define w(x) while(x--)
#define loop for(int i=0;i<n;i++)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define Ahsanul	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void solve()
{
    ll n; cin>>n;
    ll v[n];
    for(int i=0;i<n;i++)
    cin>>v[i];
    for(int i=1;i<n;i++)
    {
        v[i]+=v[i-1];
    }
    ll anss=0;
    for (int k = 1; k <= n; k++)
    {
        if (n % k)
            continue;
        ll sum = INT_MIN, summ = 1e18;
        for (int i = 0; i < n; i += k)
        {
            ll tem;
            if (i == 0)
                tem = v[k - 1];
            else
                tem = v[i + k - 1] - v[i - 1];
            sum = max(sum, tem);
            summ = min(summ, tem);
        }
        anss = max(anss, sum - summ);
    }
    cout<<anss<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}