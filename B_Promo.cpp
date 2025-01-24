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
void s()
{
    int n,q; cin>>n>>q;
    vl v(n);
    loop
    {
        cin>>v[i];
    }
    rsrt(v);
    vl pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+v[i];
    }
    w(q)
    {
        int a,b; cin>>a>>b;
        if(a==b)
        {
            cout<<pre[b-1]<<endl;
        }
        else
        {
            cout<<pre[a-1]-pre[a-b-1]<<endl;
        }
    }
}
int main()
{
    s();
}