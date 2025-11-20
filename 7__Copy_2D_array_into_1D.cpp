#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=4, m=5;
    int num[n][m] = {{1,2,3,4,17},
                     {5,6,7,8,18},
                     {9,10,11,12,19},
                     {13,14,15,16,20}};

    int arr[n*m+1], a=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            arr[a++] = num[i][j];
        }
    arr[a] = '\0';

    int row;
    cout << "which row :";
    cin >> row;

    row--;
    for(int i=row*m ; i<(row+1)*m; i++)
        cout << arr[i] <<' ';
    cout << '\n';


}