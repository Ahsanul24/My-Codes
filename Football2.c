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
    Ahsanul;
    int n,count1=0,count2=0;
    scanf("%d",&n);
    char str[n][11],str1[11];
    for(int i=0;i<n;i++){
        scanf("%s",&str[i]);
    }
    for(int i=0;i<n;i++){
        if(strcmp(str[0],str[i])==0)count1++;
        else {
            count2++;
            strcpy(str1,str[i]);
        }
    }
    if(count1>count2)printf("%s",str[0]);
    else printf("%s",str1);
}
