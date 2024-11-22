#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }

    long long sum = 0, ans = 0;
    int l = 0;
    for (int r = 0;r < n;r++)
    {
        sum += a[r];
        while (sum >= k)
        {
            ans += n - r;
            sum -= a[l++];
        }
    }

    cout << ans << endl;
    return 0;
}