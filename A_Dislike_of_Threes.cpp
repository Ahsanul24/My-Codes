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
void s()
{
    int k; cin>>k;
    vector<int>v;
    for(int i=1;i<=1966;i++)
    {
        if(i%3!=0 && i%10!=3)
        {
            v.pb(i);
        }
    }
    cout<<v[k-1]<<endl;
}
int main()
{
    Ahsanul;
    int test; cin>>test;
    w(test)
    {
        s();
    }
}