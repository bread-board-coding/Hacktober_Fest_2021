//  solve this -->// https://www.codechef.com/COW42020/problems/COW3E
// 2d prefix sum
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    /// creating prefix;
    int p[n][m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            p[i][j] = arr[i][j];
            if (i - 1 >= 0)
                p[i][j] += p[i - 1][j];
            if (j - 1 >= 0)
                p[i][j] += p[i][j - 1];
            if (i - 1 >= 0 && j - 1 >= 0)
                p[i][j] -= p[i - 1][j - 1];
        }
    }
    int i1, i2, j1, j2;
    cin >> i1 >> j1 >> i2 >> j2;
    // prefix over range
    int sum = 0;
    sum = p[i2][j2];
    if (i1 - 1 >= 0)
        sum -= p[i1 - 1][j2];
    if (j1 - 1 >= 0)
        sum -= p[i2][j1 - 1];
    if (i1 - 1 >= 0 && j1 - 1 >= 0)
        sum += p[i1 - 1][j1 - 1];
    cout << sum;
    return 0;
}
