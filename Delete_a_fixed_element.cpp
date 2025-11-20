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

    node *s=start;
    cout << "Enter which element to delete :";
    int x;
    cin >> x;
    s = start;
    while(s != NULL)
    {
        if(s->data == x)
        {
            node *a = s->link;
            s->data = a->data;
            s->link = a->link;
            delete(a);
            break;
        }
        s = s->link;
    }

    while(start != NULL)
    {
        cout << start->data <<' ';
        start = start->link;
    }
    cout << '\n';
}