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
    int test;
    scanf("%d",&test);
    while(test){
        char str1[51],str2[51];
        scanf("%s %s",&str1,&str2);
        int len1=strlen(str1),len2=strlen(str2);
        if(str1[len1-1]>str2[len2-1]){
            printf("<");
        }
        else if (str1[len1-1]<str2[len2-1]){
            printf(">");
        }
        else{
            int count1=len1-1,count2=len2-1;
            if(str1[len1-1]=='S' || str1[len1-1]=='M'){
                if(count1>count2){
                    printf("<");
                }
                else if (count1==count2){
                    printf("=");
                }
                else{
                    printf(">");
                }
            }
            else{
                if(count1>count2){
                    printf(">");
                }
                else if(count1==count2){
                    printf("=");
                }
                else{
                    printf("<");
                }
            }
        }
        cout<<endl;
    }
}
