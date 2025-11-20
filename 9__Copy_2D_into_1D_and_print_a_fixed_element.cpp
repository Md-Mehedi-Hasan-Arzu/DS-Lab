#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5, m=5;
    int num[n][m] = {{1,0,0,0,0},
                     {5,6,0,0,0},
                     {9,10,11,0,0},
                     {13,14,15,16,0},
                     {17,18,16,20,21}};

    int arr[n*m], a=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if(num[i][j] != 0)
                arr[a++] = num[i][j];
        }
    arr[a] = '\0';

    int row, col;
    cout << "row : "; cin >> row;
    cout << "colum : "; cin >> col;

    int i = (row-1)*row/2 + col;
    cout << "The element is : " << arr[i-1] << '\n';


}