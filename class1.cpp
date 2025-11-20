#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {2,3,4,6,9,5};

    swap(a[2], a[5]);

    // a[2] = a[2]^a[2]^a[5];  
    // a[5] = a[2]^a[5]^a[5];

    for(int it : a)
        cout << it <<' ';
    cout << '\n';
}