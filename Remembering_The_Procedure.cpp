// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void solve()
{
    string s;
    cin >> s;
    int n, m;
    cin >> n >> m;
    char v[n + 1][m + 1];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (k >= s.size())
            {
                v[i][j] = '.';
            }
            else
            {
                v[i][j] = s[k];
                k++;
            }
        }
    }
    char ki;
    cin >> ki;
    int a[100];
    if (ki == 'r')
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    else
    {
        for (int i = 0; i < m; i++)
            cin >> a[i];
    }

    char tem[n + 10][m + 10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            tem[i][j] = '.';
        }
    }
    int l = 0;
    if (ki == 'r')
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                swap(tem[i][j], v[a[l] - 1][j]);
            }
            l++;
        }
    }
    if (ki == 'c')
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                swap(tem[j][i], v[j][a[l] - 1]);
            }
            l++;
        }
    }
    string res = "";
    int col = 0;
    int row = 0;
    bool check = false;
    int j = 0;
    for (int i = 0; i < m; i++)
    {
        if (check)
        {
            if (j < 0)
            {
                check = false;
                j = 1;
                i--;
            }
            else
            {
                res += tem[j][i];
                // cout<<j<<" "<<i<<endl;
                j--;
            }
        }
        else
        {

            if (j == n)
            {
                check = true;
                i--;
                j=n-2;
            }
            else
            {
                res += tem[j][i];
                // cout<<j<<" "<<i<<endl;
                j++;
            }
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<tem[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    w(t)
        solve();
}
