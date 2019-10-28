#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* prev=NULL;
    Node* next=NULL;
};
void insertion(struct Node** head, int data)
{
	Node* newnode = new Node();
	newnode->data = data;
	newnode->next = *head;
	if ((*head) != NULL)
        (*head)->prev = newnode;
	*head = newnode;
}
void deletion(Node** head)
{
    if(*head == NULL)
    {
        cout<<"emmpty linked list";
        return;
    }
    Node* last = *head;
    Node* temp = new Node();
    while(last->next != NULL)
	{
        temp = last;
		last=last->next;
	}
	temp->next=NULL;
    free(last);
}
void print(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
    cout<<endl;
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
