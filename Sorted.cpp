#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    bool sorted = true;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                sorted = false;
            }
            // cout<<arr[i]<<" ";
        }

        if (sorted)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // cout << endl;
    }

    return 0;
}