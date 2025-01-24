// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k; cin>>n>>k;
    string a,b; cin>>a>>b;
    int sz=a.size();
    int szz=b.size();
    vector<string>sub;
    for(int i=0;i<sz;i++)
    {
        for(int j=1;j<=sz-i;j++)
        {
            string tem=a.substr(i,j);//sob substring ber korchi
            if(tem.size()==szz)//kintu nichi just jei gula b er size er soman.b er size upore szz er modde rakhchi
            {
                sub.push_back(tem);//jodi tem er size b er size er soman hoi tahole eta amar check kora lagbe tai eta ami store kore rakhlam er vector er modde
            }
        }
    }   
    //for(auto it:sub)cout<<it<<" ";
    int ans=100;
    for(int i=0;i<sub.size();i++)
    {
        string tem=sub[i];
        int cnt=0;
        for(int j=0;j<k;j++)
        {
            if(tem[j]!=b[j])cnt++;
        }
        ans=min(ans,cnt);
    }
    cout<<ans<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    solve();
}