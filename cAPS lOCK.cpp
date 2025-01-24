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
    int c=0;
    char a[100];
    scanf("%s",&a);
    for(int i=1;i<strlen(a);i++){
        if(a[i]>='a' && a[i]<='z'){
            c++;
        }
    }
    if(c>0){
        printf("%s",a);
    }
    else if(a[0]>='a' && a[0]<='z'){
        a[0]='A'+a[0]-'a';
        for(int i=1;i<strlen(a);i++){
            if(a[i]>='A' && a[i]<='Z'){
                a[i]='a'+a[i]-'A';
            }
        }
        printf("%s",a);
    }
    else if(1){
        for(int i=0;i<strlen(a);i++){
            if(a[i]>='A' && a[i]<='Z'){
                a[i]='a'+a[i]-'A';
            }
        }
        printf("%s",a);
    }

}
