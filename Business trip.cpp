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
    int k,a[13],temp;
    cin>>k;
    for(int i=0; i<12; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<12; i++)
    {
        for(int j=i+1; j<12; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int sum=0;
    if(k==0)cout<<"0";
    else
    {
        for(int i=0; i<12; i++)
        {
            sum+=a[i];
            if(sum>=k)
            {
                cout<<i+1;
                return;
            }
        }
        cout<<-1;
    }
}
int main()
{
    Ahsanul;
    solve();
}
