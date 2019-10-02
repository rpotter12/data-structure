#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
void insertion(Node** head, int data)
{
	Node* newnode = new Node();
	Node* last = *head;
	newnode->data = data;
	newnode->next = NULL;
	if(*head==NULL)
	{
		*head=newnode;
		return;
	}
	while(last->next != NULL)
	{
		last=last->next;
	}
	last->next=newnode;
}
void deletion(Node** head)
{
    if(*head == NULL)
    {
        cout<<"emmpty linked list";
        return;
    }
    Node* temp = *head;
    *head = temp->next;
    free(temp);
}
void print(Node* node)
{
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node=node->next;
	}
}
int main()
{
	int n,data;
	Node* head = NULL;
	while(1)
	{
        cout<<"1. insertion"<<endl;
        cout<<"2. deletion"<<endl;
        cout<<"3. print"<<endl;
        int choice;
        cout<<"enter choice: ";
        cin>>choice;
        if(choice==1)
        {
            cout<<"numbers you want to enter: ";
            cin>>n;
            for(int i=0;i<n;i++)
            {
                cout<<"enter number: ";
                cin>>data;
                insertion(&head, data);
            }
        }
        if(choice==2)
        {
            deletion(&head);
            cout<<endl;
        }
        if(choice==3)
        {
            print(head);
        }
	}
}

