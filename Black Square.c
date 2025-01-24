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
    int a,b,c,d,count=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    char str[100001];
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='1'){
            count+=a;
        }
        else if(str[i]=='2'){
            count+=b;
        }
        else if(str[i]=='3'){
            count+=c;
        }
        else{
            count+=d;
        }
    }
    printf("%d",count);
}
int main()
{
    Ahsanul;
    solve();
}
