#include<iostream>
using namespace std;

// linkedlist
struct List
{
    int data;
    List* next;
    List* prev;
};
void insertionlist(List** head, int data)
{
	List* newnode = new List();
	List* last = *head;
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
List* removeFirstNode(List* head)
{
    if (head == NULL)
        return NULL;
    List* temp = head;
    head = head->next;
    delete temp;
    return head;
}
void printlist(List *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}
// linkedlist end





// node stucture
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// function for insertion
void insertion(Node** head, int data)
{
	Node* newnode = new Node();
	Node* last = *head;
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	if(*head==NULL)
	{
		*head=newnode;
		return;
	}

	while(1)
	{
		if(data > last->data)
		{
			if(last->right != NULL)
			{
				last=last->right;
				continue;
			}
			else
			{
				last->right = newnode;
				break;
			}
		}
		else
		{
			if(last->left != NULL)
			{
				last=last->left;
				continue;
			}
			else
			{
				last->left = newnode;
				break;
			}
		}
	}
}

void printleft(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->left;
    }
}

// BFS print
void print(Node* node)
{
	Node* last = NULL;
	List* head = NULL;
	List* temp = NULL;
	if(node==NULL)
	{
		cout<<"no element is present"<<endl;
		return;
	}
	insertionlist(&head,node->data);
	temp=head;
	last=node;
	//printlist(head);
	while(1)
	{
		if(last != NULL)
		{
			insertionlist(&head,last->left->data);
			insertionlist(&head,last->right->data);
			head = removeFirstNode(head);
			cout<<head->data<<" ";
			while(head->data != last->data)
			{
				if(head->data > last->data)
					last = last->right;
				else
					last = last->left;
			}
			
		}
		else
		{
			cout<<endl;
			break;
		}
	}
}



// main function
int main()
{
	int choice,choice2,data;
	Node* head=NULL;
	while(1)
	{
		// choice for tree
		cout<<"1. enter elements"<<endl;
		cout<<"2. print tree elements"<<endl;
		cout<<"3. exit"<<endl;
		cin>>choice;

		// enter elements
		if(choice==1)
		{
			//choice for dynamic and array
			cout<<"1. enter elements dynamically(only positive)"<<endl;
			cout<<"2. enter elements through array(for both positive and negative)"<<endl;
			cout<<"3. exit"<<endl;
			cin>>choice2;

			// dynamically
			if(choice2==1)
			{
				cout<<"enter element: ";
				cin>>data;
				while(data>0)
				{
					insertion(&head,data);
					cout<<"enter element: ";
					cin>>data;
				}
			}
			else if(choice2==3)
			{
				break;
			}
		}

		else if(choice==2)
		{
			printleft(head);
		}

		else if(choice==3)
		{
			break;
		}
	}
}
