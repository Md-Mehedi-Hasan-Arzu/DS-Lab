#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num[30] = {1,2,3,4,5,6,7,8,9,10,60,70};
    int n = 12;

    int x = 54, idx = -1;

    for(int i=0; i<n; i++)
    {
        if(num[i] >= x)
        {
            idx = i;
            break;
        }
    }
    if(idx == -1)
        idx = n;

    for(int i=n-1; i>=idx; i--)
    {
        num[i+1] = num[i];
    }
    num[idx] = x;
    n++;

    for(int i=0; i<n; i++)
        cout << num[i] <<' ';
    cout << '\n';
}