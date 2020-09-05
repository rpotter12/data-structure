#include<iostream>
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
        cout<<"empty linked list";
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
	cout<<endl;
}

int main()
{
int n;
    cout<<"enter the size of stack: ";
    cin>>n;
    cout<<"1. insertion"<<endl;
    cout<<"2. deletion"<<endl;
    cout<<"3. display"<<endl;
    cout<<"4. exit"<<endl;
    Node* head=new Node();
    int choose,top=-1,num;
    while(1)
    {
        cout<<"enter option: ";
        cin>>choose;

        if(choose==1)
        {
            if(top==n-1)
            {
                cout<<"overflow"<<endl;
            }
            else
            {
                cout<<"enter number: ";
                cin>>num;
                top++;
                insertion(&head, num);
            }
            continue;
        }
        else if(choose==2)
        {
            if(top==-1)
            {
                cout<<"underflow"<<endl;
            }
            else
            {
                deletion(&head);
            }
            continue;
        }
        else if(choose==3)
        {
            print(head);
            continue;
        }
        else
        {
            break;
        }
    }
}
