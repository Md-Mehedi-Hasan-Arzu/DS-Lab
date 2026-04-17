#include<bits/stdc++.h>
using namespace std;

const int INF = 1E9;
int arr[100];
int a=-1;
void push(int x)
{
    arr[++a] = x;
}

int top()
{
    return arr[a];
}

void pop()
{
    arr[a] = INF;
    a--;
}

int main()
{
    int n;
    cin >> n;

    push(INF);
    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        push(x);
    }

    while(top() != INF)
    {
        cout << top() <<' ';
        pop();
    }
    cout << endl;

}