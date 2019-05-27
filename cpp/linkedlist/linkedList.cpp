#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head=NULL;
void input()
{
    int n,num;
    cout<<"enter size: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        node *temp=new node;
        node *newnode=new node;
        newnode->data=num;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
}
void display()
{
    node *temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
void edelete()
{
    int n;
    cout<<"\nenter element to delete"<<endl;
    cin>>n;
    int flag=0;
    node *temp=head;
    node *ptr;
    while(temp->next!=NULL && temp->data!=n)
    {
        ptr=temp;
        temp=temp->next;
        if(temp->data==n)
        {
          ptr->next = temp->next;
         free(temp);
         flag=1;
        }
        }
        if(flag==0)
        {
            cout<<"element not found"<<endl;
        }
}

int main()
{
    while(1)
    {
        cout<<"1. insertion"<<endl;
        cout<<"2. display"<<endl;
        cout<<"3. deletion"<<endl;
        char ch;
        cin>>ch;
        switch(ch)
        {
            case '1': input();
                    break;
            case '2': display();
                    break;
            case '3': edelete();
                    break;
        }
    }
    return 0;
}
