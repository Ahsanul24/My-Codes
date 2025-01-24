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
const int N=1e5+10;
void solve()
{
    int n; cin>>n;
    vector<bool>sieve(N,true);
    sieve[0]=sieve[1]=false;
    for(int i=2;i<N;i++)
    {
        if(sieve[i])
        {
            for(int j=i*2;j<N;j+=i)
            {
                sieve[j]=false;
            }
        }
    }
    if(n==1)
    {
        cout<<"Bob"<<endl;
        return;
    }
    if(n&1)
    {
        cout<<"Alice"<<endl;
    }
    else
    {
        cout<<"Bob"<<endl;
    }

}
int main()
{
    int t; cin>>t;
    w(t)
    solve();
}