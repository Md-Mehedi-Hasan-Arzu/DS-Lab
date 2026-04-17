#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[50] = "abcdefghijklmnopqrstuvwxyz";
    string trg = "karim";

    int idx = -1;
    for(int i=0; i<26; i++)
    {
        if(s[i]>trg[0])
        {
            idx = i;
            break;
        }
    }

    int l = trg.size();
    for(int i=26-1; i>=idx; i--)
        s[i+l] = s[i];

    for(int i=0; i<l; i++)
        s[idx+i] = trg[i];

    cout << s << "\n\n";
}