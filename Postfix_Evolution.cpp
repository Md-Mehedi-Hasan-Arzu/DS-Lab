#include<bits/stdc++.h>
using namespace std;
const double INF = 1E9;

double arr[100];
int a=-1;
void push(double x)
{
    arr[++a] = x;
}

double top()
{
    return arr[a];
}

void pop()
{
    a--;
}

int main()
{
    cout << "Enter Postfix equaton : ";
    string p, x;
    getline(cin, p);

    stringstream postfix(p);
    while(postfix >> x)
    {
        if(x=="+" || x=="-" || x=="*" || x=="/" || x=="^")
        {
            double v = top();
            pop();

            double u = top();
            pop();

            if(x=="+")         push(u+v);
            else if(x=="-")    push(u-v);
            else if(x=="*")    push(u*v);
            else if(x=="/")    push(u/v);
            else if(x=="^")    push(pow(u,v));
        }
        else
        {
            int ch = stoi(x);
            push(ch);
            cout << ch << "    ";
        }

        for(int i=0; i<=a; i++)     // printing stack
            cout << arr[i] <<' ';
        cout << endl;
        
    }

    double ans = top();
    cout << "The calculated value is : " << ans << endl;

}