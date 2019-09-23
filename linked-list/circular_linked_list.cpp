#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next=NULL;
};

void insertionbeg(int data, Node** last)
{
    Node* l=new Node();
    l = *last;
    Node* newnode=new Node();
    newnode->data=data;
    if(*last==NULL)
    {
        newnode->next = newnode;
        *last=newnode;
    }
    else
    {
        newnode->next = l->next;
        l->next=newnode;
    }
}

void insertionlast(int data, Node** last)
{
    Node* l=new Node();
    l = *last;
    Node* newnode=new Node();
    newnode->data=data;
    if(l==NULL)
    {
        newnode->next = newnode;
        l=newnode;
    }
    else
    {
        newnode->next = l->next;
        l->next = newnode;
        l = newnode;
    }
    *last = l;
}

void traverse(struct Node *last)
{
    Node* p=new Node;
    if (last == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    p = last->next;
    do
    {
        cout<<p->data<< " ";
        p=p->next;
    }
    while(p != last->next);
    cout<<endl;
}

int main()
{
    cout<<"1. insertion at beginning"<<endl;
    cout<<"2. insertion at last"<<endl;
    cout<<"3. traverse"<<endl;
    int choice,data;


    Node* last=new Node();
    last=NULL;
    while(1)
    {
        cout<<"enter choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"enter data: ";
                    cin>>data;
                    insertionbeg(data,&last);
                    continue;
            case 2: cout<<"enter data: ";
                    cin>>data;
                    insertionlast(data,&last);
                    continue;
            case 3: traverse(last);
                    continue;
            default: break;
        }
        break;
    }
    return 0;
}
