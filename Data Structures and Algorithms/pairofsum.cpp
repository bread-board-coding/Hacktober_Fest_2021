#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    bool chk;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == k && arr[i] != arr[j])
            {
                chk = true;
                cout << "The numbers are: " << arr[i] << " and " << arr[j] << endl;
                break;
            }
        }
    }
    if (chk)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}
