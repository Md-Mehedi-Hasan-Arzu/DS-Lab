#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num[] = {5,6,4,9,1,3,10,5,15,11,20,17,25,16};
    int n = sizeof(num)/sizeof(num[0]);

    for(int i=0; i<n; i++)
        for(int j=0; j<n-i-1; j++)
        {
            if(num[j] > num[j+1])
            {
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }

    for(int it : num)
        cout << it <<' ';
    cout << "\n\n";


    string s = "ahouhnknyialkjdfiopjnjhopjbafgrqezbv";
    int m = s.size();
    for(int i=0; i<m; i++)
        for(int j=0; j<m-i-1; j++)
        {
            if(s[j] > s[j+1])
            {
                char t = s[j];
                s[j] = s[j+1];
                s[j+1] = t;
            }
        }

    cout << s << "\n\n";
}