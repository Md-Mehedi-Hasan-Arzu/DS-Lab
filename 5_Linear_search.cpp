#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num[] = {5,8,10,6,9,8,40,32,7,90};

    int tgt = 40, idx = -1;
    for(int i=0; num[i]!='\0'; i++)
        if(num[i]==tgt)
        {
            idx = i;
            break;
        }

    if(idx == -1)
        cout << tgt <<" dosen't exist in the array\n";
    else
        cout << "the index of " << tgt << " is = " << idx << '\n';
}