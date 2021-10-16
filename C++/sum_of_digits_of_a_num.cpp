#include <bits/stdc++.h>
using namespace std;

/* Function */
int Sumdigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << Sumdigits(n) << endl;
    return 0;
}

//example -

// input = 45
// output = 9

// input = 5654
// output = 20
