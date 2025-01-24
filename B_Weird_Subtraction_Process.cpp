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
#define Ahsanul	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void s()
{
    ll a,b; cin>>a>>b;
    while (a>=2*b || b>=a*2)
    {
        if(a>=2*b)
        {
            a%=(2*b);
            if(a==0)
            {
                break;
            }
        }
        else if(b>=2*a)
        {
            b%=(2*a);
            if(b==0)
            {
                break;
            }
        }
    }
    cout<<a<<" "<<b<<endl;
}
int main()
{
    s();
}