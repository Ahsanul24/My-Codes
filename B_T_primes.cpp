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
const int N=1e6+10;
vector<bool> prime(N, true);
void solve()
{
    prime[0] = prime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (prime[i])
        {
            for (int j = i * 2; j < N; j += i)
            {
                prime[j] = false;
            }
        }
    }
    ll n; cin>>n;
    loop
    {
        ll a;
        cin>>a;
        ll x=sqrt(a);
        ll kocu=x*x;
        if(kocu==a && prime[x])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
int main()
{
    Ahsanul;
    solve();
}