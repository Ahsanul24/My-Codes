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
    int n;
    cin>>n;
    vector<int>even,odd;
    if(n%2==0){
        for(int i=2;i<=n*2;i+=2){
            even.push_back(i);
        }
    }
    else{
        for(int i=2;i<n*2;i+=2){
            odd.push_back(i);
        }
    }
    odd.push_back(n*3);
    if(n%2==0){
        for(auto it:even){
            cout<<it<<" ";
        }
    }
    else{
        for(auto i:odd){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    Ahsanul;
    int test; cin>>test;
    w(test){
        solve();
    }
}
