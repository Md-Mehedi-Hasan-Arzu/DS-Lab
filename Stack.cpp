#include<bits/stdc++.h>
using namespace std;

int arr[100];
int ptr=-1;

void push(int x)
{
    arr[++ptr] = x;
}
void pop()
{
    arr[ptr--] = INT_MAX;
}
int top()
{
    return arr[ptr];
}

int main()
{
    int n;
    cin >> n;
    push(INT_MAX);

    for(int i=1, x; i<=n; i++)
    {
        cin >> x;
        push(x);
    }

    while(top() != INT_MAX)
    {
        cout << top() <<' ';
        pop();
    }
    cout << '\n';

//-----------------------------------------------------------
//                  reuse stack

    for(int i=1; i<=10; i++)
    {
        push(i*10);
    }
    while(top() != INT_MAX)
    {
        cout << top() <<' ';
        pop();
    }
    cout << '\n';
}