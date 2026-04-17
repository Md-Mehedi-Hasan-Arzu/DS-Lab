#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int n=4, m=5;
    // int A[n][m] = {{2,2,2,2,2},
    //                {2,2,2,2,2},
    //                {2,2,2,2,2},
    //                {2,2,2,2,2}};
    // int B[m][n] = {{1,1,1,1},
    //                {1,1,1,1},
    //                {1,1,1,1},
    //                {1,1,1,1},
    //                {1,1,1,1}};

    // int n=1, m=3;
    // int A[n][m] = {{2,3,4}};
    // int B[m][n] = {{6},{7},{8}};

    int n=3, m=1;
    int A[n][m] = {{6},{7},{8}};
    int B[m][n] = {{2,3,4}};

    int mult[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            mult[i][j] = 0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<m; k++)
            {
                mult[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout << mult[i][j] << ' ';
        cout << '\n';
    }
}