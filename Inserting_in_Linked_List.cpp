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

    node* start = NULL;
    node* previous = NULL;
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

//--------------------------------------------------------------------

    cout << "Element to insert at begin : ";
    node* p1 = (node*)malloc(sizeof(node));
    cin >> p1->data;
    p1->link = start;
    start = p1;     // new start

//----------------------------------------------------------------------

    int idx;
    cout << "Position where to insert : ";
    cin >> idx;
    cout << "Element what to insert : ";
    node *p2 = (node*)malloc(sizeof(node));
    node *s = start, *s1=NULL;;
    for(int i=1; s!=NULL; i++)
    {
        if(i == idx-1)
        {
            s1 = s->link;
            s->link = p2;
        }
        if(i==idx)
        {
            cin >> p2->data;
            p2->link = s1->link;
            break;
        }
        s = s->link;
    }

//-----------------------------------------------------------------------

    cout << "Element to insert at end : ";
    node* p3 = (node*)malloc(sizeof(node));
    cin >> p3->data;
    p3->link = NULL;
    node* ss = start;
    while(ss != NULL)
    {
        if(ss->link == NULL)
        {
            ss->link = p3;
            break;
        }
        ss = ss->link;
    }

    while(start != NULL)
    {
        cout << start->data <<' ';
        start = start->link;
    }
    cout << endl;

}