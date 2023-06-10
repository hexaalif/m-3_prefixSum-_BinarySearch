#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    // vector<int> v(n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            flag = 1;
            break;
        }
        // cout << arr[i] << " ";
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

// done exm