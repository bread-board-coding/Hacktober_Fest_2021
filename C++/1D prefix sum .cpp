// https://www.spoj.com/problems/CSUMQ/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int prefix[n];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            prefix[0] = arr[0];
        }
        else
        {
            prefix[i] = prefix[i - 1] + arr[i];
        }
    }

    int t = 1;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int sum = prefix[r];
        if (l - 1 >= 0)
        {
            sum -= prefix[l - 1];
        }
        cout << sum << '\n';
    }
    return 0;
}