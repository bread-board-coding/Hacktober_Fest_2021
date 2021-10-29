
#include <bits/stdc++.h>
using namespace std;

// Function for finding the first missing positive number

int firstMissingPositive(int arr[], int n)
{
    int ptr = 0;

    // Check if 1 is present in array or not
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            ptr = 1;
            break;
        }
    }

    // If 1 is not present
    if (ptr == 0)
        return 1;

    // Changing values to 1
    for (int i = 0; i < n; i++)
        if (arr[i] <= 0 || arr[i] > n)
            arr[i] = 1;

    // Updating indices according to values
    for (int i = 0; i < n; i++)
        arr[(arr[i] - 1) % n] += n;

    // Finding which index has value less than n
    for (int i = 0; i < n; i++)
        if (arr[i] <= n)
            return i + 1;

    // If array has values from 1 to n
    return n + 1;
}

int main()
{
    int arr[] = { 2, 3, -7, 6, 8, 1, -10, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = firstMissingPositive(arr, n);

    cout << ans;

    return 0;
}
