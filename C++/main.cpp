#include <iostream>

using namespace std;

int main()
{
    int m,n;
    int arr[20][20];

    cout <<"Enter no. of rows and columns" << endl;
    cin >>m>>n;

    cout << "Enter value in array" << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }




      int val = 0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
         if(arr[i][j] != 0)
            val++;
        }
    }

    int spar[3][val];
    int k=0;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
           if(arr[i][j] !=0 )
           {
               spar[0][k] = i;
               spar[1][k] = j;
               spar[2][k] = arr[i][j];
               k++;
           }
        }
    }


cout << "Sparse matrix :" << endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<val; j++)
        {
            cout << spar[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
