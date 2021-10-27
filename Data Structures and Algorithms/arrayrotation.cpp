#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, d;
    cin >> num >> d;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int i = d; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < d; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
