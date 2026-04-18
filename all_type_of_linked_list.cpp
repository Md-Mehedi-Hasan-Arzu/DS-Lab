#include<bits/stdc++.h>
using namespace std;

struct  Node{
    int data;
    struct  Node *next;
};

 typedef Node node;
 node *head = NULL, *tail = NULL;
//creating node.
node *getnode(int data)
{
    node * temp = new node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

//creating list.
void create_list(int a[], int size)
{
    for(int i = 0; i<size; i++)
    {
        if(head == NULL)
        {
            head = getnode(a[i]);
            tail = head;
        }
        else{
            tail->next = getnode(a[i]);
            tail = tail->next;
        }
    }
}
//traverse and print list.
void traverse()
{
    node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//insert at first.
node *insert_first(int data, node *temp)
{
   node *new_node = getnode(data);
   new_node->data = data;
   new_node->next = temp;
   return new_node;
}

//insert at last.
void insert_last(int data)
{
    tail->next = getnode(data);
    tail = tail->next;

}

//insert specific position.
void insert_nth_position(int item, int pos)
{
    if(pos == 1)
    {
        node *f = new node;
        f->data = item;
        f->next = head;
        head = f;
        return ;
    }

      int i = 1;
        node *t1, *t2;
        t1 = head;
        t2 = t1;
        while(i<pos)
         {
            t2 = t1;
            t1 = t1->next ;
            i++;
         }
        node *temp = getnode(item);
        t2->next = temp;
        temp->next = t1;
}
//delete first node.
void delete_first()
{
    if(head == NULL)
    {
        cout<<" empty! ";
    }
    node *temp = head;
    head = head->next;
}
//delete last node.
void delete_last()
{
    if(head == NULL)
    {
        cout<<"empty list" ;
    }

    node *temp = head;
    node *temp1 = temp;
    while(temp->next!=NULL)
    {
        temp1 = temp;
        temp = temp->next;
    }
     temp1->next = NULL;
     free(temp);
}
//delete specific node.
void delete_any_position(int pos)
{
    if (head == NULL)
     {
        cout<<"empty list"<<endl;
        return ;
     }
     node *pcurr, *curr;
     curr = head;
     pcurr = curr;
     int i = 1;
     while(i<pos)
     {
        pcurr = curr;
        curr = curr->next;
        i++;
     }
     pcurr->next = curr->next;

}

 //searching node. 
int searching_item(int item)
{
    int pos = 1;
    if(head == NULL)
    {
        cout<<"empty"<<endl;
        return -1;
    }
  
    if(head->data == item)
    {
        cout<<"position is: "<<endl;
        return pos;
    }
    node *temp = head;
    while(temp != NULL)
    {
        if(temp->data== item)
        {
          return pos;
        }
        temp = temp->next;
        pos++;
    }
    return -1;

}
//sorting list.
 void sort_linkedlist()
{
    if(head == NULL)
    {
        cout<<"list is empty! ";
    }
    node *temp, *tempf;
    temp = head;
    while(temp!= NULL)
    {
        tempf = temp->next;
        while(tempf != NULL)
        {
            if(temp->data > tempf->data)
            {
                int t = temp->data;
                temp->data = tempf->data;
                tempf->data = t;

            }
            tempf = tempf->next;
        }
        temp = temp->next;
    }

}

int main()
{
    int a[6] = {3, 2, 6, 42, 50, 20};
    create_list(a, 6);
    traverse();
    node *p = head;
    head = insert_first(80, p);
    traverse();
    node *L = head;
    insert_last(90);
    traverse();
    insert_nth_position(65, 1);
    traverse();
    insert_nth_position(400, 8);
    traverse();
    delete_first();
    traverse();
    delete_last();
    traverse();
    delete_any_position(5);
    traverse();
   int pos = searching_item(50);
    
    if(pos == -1)
    {
        cout<<"item not found"<<endl;
    }
    else{
        cout<<"found at position: "<<pos<<endl;
    }

   sort_linkedlist();
   traverse();

    return 0;
}
