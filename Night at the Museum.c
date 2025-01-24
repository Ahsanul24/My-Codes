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
    string str;
    cin>>str;
    int sum=0,tap1,tap2;
    tap1=abs(97-str[0]);
    tap2=26-tap1;
    if(tap1<tap2){
        sum+=tap1;
    }
    else{
        sum+=tap2;
    }
        for(int i=0;i<str.size()-1;i++){
        tap1=abs(str[i]-str[i+1]);
        tap2=26-tap1;
        if(tap1<tap2){
            sum+=tap1;
        }
        else{
            sum+=tap2;
        }
    }
    printf("%d",sum);
}
