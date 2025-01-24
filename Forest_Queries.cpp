// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test  \
    int t;    \
    cin >> t; \
    for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v)           \
    for (auto it : v)      \
        cout << it << ' '; \
    cout << endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
const int N = 1e3;
int a[N][N];
int ini_tree[N][4 * N];
int final_tree[4 * N][4 * N];
int sz;
void seg_1(int strip, int node, int beg, int end) // for leaf node of final tree//this is individual row segment tree
{
    if (beg == end)
    {
        ini_tree[strip][node] = a[strip][beg];
        return;
    }
    int left = node * 2;
    int right = left + 1;
    int mid = beg + (end - beg) / 2;
    seg_1(strip, left, beg, mid);
    seg_1(strip, right, mid + 1, end);
    ini_tree[strip][node] = ini_tree[strip][left] + ini_tree[strip][right];
}
void final_seg(int node, int beg, int end)
{
    if (beg == end)
    {
        for (int i = 1; i < 2 * sz; i++)
        {
            final_tree[node][i] = ini_tree[end][i];
        }
        return;
    }
    int left = node * 2;
    int right = left + 1;
    int mid = beg + (end - beg) / 2;
    final_seg(left, beg, mid);
    final_seg(right, mid + 1, end);
    for (int i = 1; i < 2 * sz; i++)
    {
        final_tree[node][i] = final_tree[left][i] + final_tree[right][i];
    }
}
int queryy(int y1, int y2, int nodex, int node, int beg, int end)//for relevent collum
{
    if (y1 > end or y2 < beg)
    {
        return 0;
    }
    if(beg==end)
    {
        return final_tree[nodex][node];
    }
    if (beg >= y1 and y2 >= end)
    {
        return final_tree[nodex][node];
    }
    int left = node * 2;
    int right = left + 1;
    int mid = beg + (end - beg) / 2;
    int p = queryy(y1, y2, nodex, left, beg, mid);
    int q = queryy(y1, y2, nodex, right, mid + 1, end);
    return p + q;
}
int queryx(int x1, int x2, int y1, int y2, int node, int beg, int end)//for relevent row
{
    if (x1 > end or x2 < beg)
    {
        return 0;
    }
    if(beg==end)
    {
       return queryy(y1,y2,node,1,0,sz-1);
    }
    if (beg >= x1 and x2 >= end)
    {
        return queryy(y1, y2, node, 1, 0, sz - 1);
    }
    int left = node * 2;
    int right = left + 1;
    int mid = beg + (end - beg) / 2;
    int p = queryx(x1, x2, y1, y2, left, beg, mid);
    int q = queryx(x1, x2, y1, y2, right, mid + 1, end);
    return p + q;
}
void solve()
{
    int n, q;
    cin >> n >> q;
    sz = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            if (c == '*')
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        seg_1(i, 1, 0, n - 1);
    }
    final_seg(1, 0, n - 1);
    w(q)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        cout << queryx(x1, y1, x2, y2, 1, 0, n - 1) << endl;
    }
    // for(int i=0;i<2*n;i++)
    // {
    //     for(int j=0;j<2*n;j++)
    //     {
    //         cout<<final_tree[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}
int main()
{
    Ahsanul;
    //    test
    solve();
}