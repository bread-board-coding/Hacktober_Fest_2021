// find the maximum subarray sum of size k;
// using prefix sum
//
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {2, 1, 2, 3, 5};
    int p[n];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            p[0] = arr[0];
        else
        {
            p[i] = p[i - 1] + arr[i];
        }
    }
    int k = 3, sum = 0, max = 0;
    for (int i = 0; i <= n - k; i++)
    {
        int l = i, r = i + k - 1;
        sum = p[r];
        if (l - 1 >= 0)
            sum -= p[l - 1];
        if (sum > max)
            max = sum;
    }
    cout << max << "\n";

    return 0;
}