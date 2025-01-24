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
#define w(x) while(x--)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define Ahsanul	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int a=0,p=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>0)
        {
            p+=v[i];
        }
        else
        {
            if(p<=0)
            {
                ++a;
            }
            else
            {
                --p;
            }
        }
    }
    cout<<a<<endl;
}
int main()
{
    Ahsanul;
    solve();
}
