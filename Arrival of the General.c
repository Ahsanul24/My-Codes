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
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int min=ara[0],count;
    for(int i=0;i<n;i++){
        if(min>ara[i]){
            min=ara[i];
        }
    }
    for(int i=0;i<n;i++){
        if(min==ara[i]){
            count=i+1;
        }
    }
    int move;
    int max=ara[0],flag;
    for(int i=0;i<n;i++){
        if(max<ara[i]){
            max=ara[i];
        }
    }
    for(int i=0;i<n;i++){
        if(max==ara[i]){
            flag=i+1;
            break;
        }
    }
    if(max==ara[0] && min==ara[n-1]){
        printf("0");
    }
    else{
    if(count<flag){
        move=(n-count)+(flag-2);
    }
    else{
        move=(flag-1)+(n-count);
    }
    printf("%d",move);
    }
}
int main()
{
    Ahsanul;
    solve();
}
