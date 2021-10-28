#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    bool swapped = false;
    while (count < n - 1)
    {
        for (int i = 0; i < n - count - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }

        count++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
