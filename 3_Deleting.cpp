#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int n = sizeof(num)/sizeof(num[0]);

    int pos=2;
    pos--;
    for(int i=pos; i<n-1; i++)
        num[i] = num[i+1];

    n--;
    for(int it : num)
        cout << it <<' ';
    cout << '\n';
}