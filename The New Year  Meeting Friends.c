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
    int x,y,z;
    cin>>x>>y>>z;
    int dis1,dis2,dis3;
    dis1=abs(x-y)+abs(x-z);
    dis2=abs(y-x)+abs(y-z);
    dis3=abs(z-x)+abs(z-y);
    if(dis1<dis2 && dis1<dis3){
        printf("%d",dis1);
    }
    else if(dis2<dis1 && dis2<dis3){
        printf("%d",dis2);
    }
    else{
        printf("%d",dis3);
    }
}
