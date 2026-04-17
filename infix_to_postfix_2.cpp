#include <bits/stdc++.h>
using namespace std;

char arr[100];
int a = -1;
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
    a--;
}

int check(char ch)
{
    if(ch=='+' || ch=='-')  return 1;
    if(ch=='*' || ch=='/')  return 2;
    return 3;
}

int main()
{
    cout << "Enter Infix equation : ";
    string infix, postfix;
    cin >> infix;

    push('(');
    for (int i = 0; i < infix.size(); i++)
    {
        for(int j=0; j<=a; j++)     // printing stack
            cout << arr[j] <<' ';
        cout << "         ";
        cout << postfix << endl;

        if (infix[i] >= 'A' && infix[i] <= 'Z')
            postfix.push_back(infix[i]);
        else if (infix[i] >= '0' && infix[i] <= '9')
            postfix.push_back(infix[i]);
        else if (infix[i] == '(')
        {
            push('(');
        }
        else if (infix[i] == ')')
        {
            while (top() != '(')
            {
                postfix.push_back(top());
                pop();
            }
            pop();
        }
        else
        {
            while (top() != '(')
            {
                if(check(top()) >= check(infix[i]))
                {
                    postfix.push_back(top());
                    pop();
                }
                else
                    break;
            }
            push(infix[i]);
        }
    }

    while (top() != '(')
    {
        postfix.push_back(top());
        pop();
    }

    cout << "The final postfix equation : ";
    cout << postfix << "\n\n\n";
}