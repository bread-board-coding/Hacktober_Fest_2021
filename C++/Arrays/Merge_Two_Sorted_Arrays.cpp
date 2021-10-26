// C++ Program for merging two
// sorted arrays without extra space

#include <bits/stdc++.h>
using namespace std;

// Function for merging two
// sorted arrays without
// extra space

void merge(int M, int N, int A[], int B[])
{
    // Traverse first array and check each element

    for (int i = 0; i < M; i++)
    {
        // check if first element of second array
        // is smaller

        if (A[i] > B[0])
        {
            swap(A[i], B[0]);
            int j = 0;

            // shift B[0 ] to its correct position in
            // second array

            while (j + 1 < N && B[j] > B[j + 1])

                swap(B[j], B[j + 1]), j++;
        }
    }

    // Print resultant array

    for (int i = 0; i < M; i++)
        cout << A[i] << " ";

    cout << endl;

    for (int i = 0; i < N; i++)
        cout << B[i] << " ";
}

int main()
{

    // input size of both the arrays

    int M, N;
    cin >> M >> N;

    int A[M], B[N];

    // input both the arrays

    for (int i = 0; i < M; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++)
        cin >> B[i];

    // function call

    merge(M, N, A, B);
}