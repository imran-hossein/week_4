#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long int s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0, ans = n + 1;
    long long int sum = 0;
    while (r < n)
    {
        sum += a[r];
        while (sum >= s)
        {
            ans = min(ans, r - l + 1);
            sum -= a[l];
            l++;
        }
        r++;
    }
    if (ans == n + 1)
    {
        cout << -1 << endl;
    }
    else
        cout << ans << endl;

    return 0;
}