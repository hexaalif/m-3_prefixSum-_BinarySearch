#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int prefix_sum[n];
    prefix_sum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = a[i] + prefix_sum[i - 1];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int sum = 0;
        if (l == 0)
            sum = prefix_sum[r];
        else
            sum = prefix_sum[r] - prefix_sum[l - 1];
        cout << sum << endl;
    }
    return 0;
}