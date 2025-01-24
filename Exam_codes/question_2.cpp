/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include <bits/stdc++.h>
using namespace std;
inline int maxi(int a, int b, int c)
{
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = maxi(a, b, c);
    cout << ans << '\n';
}