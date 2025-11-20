#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num[] = {1,2,3,4,5,6,7,8,9,15,20,25,36,40,45,50};
    int n = sizeof(num)/sizeof(num[0]);

    int tgt = 15, idx = -1;
    int low=0, high=n-1;

    while(low <= high)
    {
        int mid = (low+high)/2;
        if(num[mid]==tgt)
        {
            idx = mid;
            break;
        }
        else if(num[mid] > tgt)
            high = mid-1;
        else
            low = mid+1;
    }

    if(idx == -1)
        cout << "Terget not found\n";
    else
        cout << "Terget is located on index :" << idx << '\n';

}