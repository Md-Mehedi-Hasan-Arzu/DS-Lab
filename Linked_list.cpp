#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* link;
};

int main()
{
    int n;
    cin >> n;

    node *start = NULL, *previous=NULL;
    for(int i=1; i<=n; i++)
    {
        node* p = (node*)malloc(sizeof(node));
        cin >> p->data;
        p->link = NULL;

        if(i==1)
            start = p;
        if(previous != NULL)
            previous->link = p;
        previous = p;
    }

    while(start != NULL)
    {
        cout << start->data <<' ';
        start = start->link;
    }
    cout << endl;
}