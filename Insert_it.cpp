#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cin >> x;
    vector<int> v1(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v1[i];
    }
    int q;
    cin >> q;
    v.insert(v.begin() + q, v1.begin(), v1.end());
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}