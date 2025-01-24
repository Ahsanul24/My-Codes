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
    int o,k; cin>>o>>k;
    for(int i=1;i<=o;i++)
    {
        k+=(i*5);
        if(k>240)
        {
            cout<<i-1<<endl;
            break;
        }
        else if(i==o)
        {
            cout<<i<<endl;
            break;
        }
    }
}
int main()
{
    Ahsanul;
    s();
}