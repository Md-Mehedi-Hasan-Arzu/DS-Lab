#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=4, m=5;
    int A[n][m] = {{2,2,2,2,2},
                   {2,2,2,2,2},
                   {2,2,2,2,2},
                   {2,2,2,2,2}};

    int B[n][m] = {{1,1,1,1,1},
                   {1,1,1,1,1},
                   {1,1,1,1,1},
                   {1,1,1,1,1}};

    int sum[n][m], sub[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
            sub[i][j] = A[i][j] - B[i][j];
        }

    cout << "Following is the summation of Matrix A and Matrix B :\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout << sum[i][j] <<' ';
        cout << '\n';
    }

    cout << "\nFollowing is the subtraction of Matrix A and Matrix B :\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout << sub[i][j] <<' ';
        cout << '\n';
    }
}