// Bismillahir Rahmanir Raheem
//Coded by Ahsanul Imam
//NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int alice=1,bob=0;
    int rem=n-1;bool a=false,b=true;
    int i=2,count1=0,count2=0;
    while(rem>i && count1<=2 && a==true){
        alice+=i;
        rem-=i;
        i++;
        count1++;
        if(rem<i && count1<2){
            alice+=rem;
        }
        if(count1==2){
            a=false;
        }
    }
    a=true;
    count1=0;
    while(rem>i && count2<=2 && b==true){
        bob+=i;
        rem-=i;
        i++;
        count2++;
        if(rem<i && count2<2){
            bob+=rem;
        }
        if(count2==2){
            b=false;
        }
    }
    b=true;
    count2=0;
    cout<<alice<<" "<<bob<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
