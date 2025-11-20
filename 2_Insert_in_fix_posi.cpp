#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num[30] = {1,2,3,4,5,6,7,8,9,10,60,70};
    int n = 12;

    int x = 90, pos = 5;

    pos--;
    for(int i=n-1; i>=pos; i--)
    {
        num[i+1] = num[i];
    }
    num[pos] = x;
    n++;

    for(int i=0; i<n; i++)
        cout << num[i] <<' ';
    cout << "\n";



    char s[50] = "abcdefghijklmnopqrstuvwxyz";
    string trg = "karim";

    int l = trg.size();
    for(int i=25; i>=pos; i--)
        s[i+l] = s[i];

    for(int i=0; i<l; i++)
        s[pos+i] = trg[i];

    cout << s << "\n\n";
}