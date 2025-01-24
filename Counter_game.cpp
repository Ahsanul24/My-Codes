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
void solve(ll n)
{
    int cnt = 0;
    while (n != 1)
    {
        int len = 0;
        ll tmp = n;
        while (tmp != 0)
        {
            tmp /= 2;
            len++;
        }
        ll a = 1ll << (len - 1);
        if (n == a)
        {
            n /= 2;
        }
        else
        {
            n -= a;
        }
        cnt++;
    }
     cnt % 2 == 0 ? cout<<"Richard" : cout<<"Louise";
     cout<<endl;
    // cout<<cnt<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        solve(n);
    }
    return 0;
}
