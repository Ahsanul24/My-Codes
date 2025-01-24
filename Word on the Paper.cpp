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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[9],b[9],c[9],d[9],e[9],f[9],g[9],h[9];
        cin>>a>>b>>c>>d>>e>>f>>g>>h;
        for(int i=0;i<8;i++){
            if(a[i]!='.'){
                cout<<a[i];
            }
        }
        for(int i=0;i<8;i++){
            if(b[i]!='.'){
                cout<<b[i];
            }
        }
        for(int i=0;i<8;i++){
            if(c[i]!='.'){
                cout<<c[i];
            }
        }
        for(int i=0;i<8;i++){
            if(d[i]!='.'){
                cout<<d[i];
            }
        }
        for(int i=0;i<8;i++){
            if(e[i]!='.'){
                cout<<e[i];
            }
        }
        for(int i=0;i<8;i++){
            if(f[i]!='.'){
                cout<<f[i];
            }
        }
        for(int i=0;i<8;i++){
            if(g[i]!='.'){
                cout<<g[i];
            }
        }
        for(int i=0;i<8;i++){
            if(h[i]!='.'){
                cout<<h[i];
            }
        }
        cout<<endl;
    }
}
