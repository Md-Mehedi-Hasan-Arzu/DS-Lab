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

    //-------------------------------------------------------------

    cout <<"Deleting from begining \n";
    node *s = start;
    start = start->link;
    delete(s);

    s = start;
    while(s != NULL)
    {
        cout << s->data <<' ';
        s = s->link;
    }
    cout << endl;

//-------------------------------------------------------------------

    cout << "Deleting from end \n";
    s = start;
    while(s->link->link != NULL)
    {
        s = s->link;
    }
    delete(s->link);
    s->link = NULL;

    s = start;
    while(s != NULL)
    {
        cout << s->data << ' ';
        s = s->link;
    }
    cout << '\n';

}