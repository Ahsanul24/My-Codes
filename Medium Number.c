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
int midium(int x,int y,int z)
{
    if(x>y && x<z){
        return x;
    }
    else if(x>z && x<y){
        return x;
    }
    else if(y>x && y<z){
        return y;
    }
    else if(y>z && y<x){
        return y;
    }
    else{
        return z;
    }
}
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        printf("%d\n",midium(a,b,c));
    }
}
