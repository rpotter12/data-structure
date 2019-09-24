#include<iostream>
using namespace std;
// node stucture
struct Node
{
    int data;
    Node* left;
    Node* right;
};
void insertionNode(Node** tail, int data)
{
	Node* newnode = new Node();
	Node* last = *tail;
	newnode->data = data;
	newnode->right = NULL;
	if(*tail==NULL)
	{
		*tail=newnode;
		return;
	}
	while(last->right != NULL)
	{
		last=last->right;
	}
	last->right=newnode;
}
Node* removeFirstNode(Node* tail)
{
    if (tail == NULL)
        return NULL;
    Node* temp = tail;
    tail = tail->right;
    cout<<temp->data<<" ";
    delete temp;
    return tail;
}
void printNode(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->right;
    }
}
// linkedNode end







// function for insertion
void insertion(Node** head, int data)
{
	Node* newnode = new Node();
	if(newnode==NULL)
	{
		cout<<"NODE NOT CREATED";
		getchar();
		getchar();
	}
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

// BFS print
void helloworl(Node* node)
{
	Node* last = NULL;
	Node* tail = NULL;
	Node* temp3 = NULL;
	if(node==NULL)
	{
		cout<<"no element is present"<<endl;
		return;
	}
	insertionNode(&tail,node->data);
	last=node;
	//printNode(head);
	while(1)
	{
		if(last != NULL)
		{
            if(last->left != NULL)
                insertionNode(&tail,last->left->data);
            if(last->right != NULL)
                insertionNode(&tail,last->right->data);
			tail = removeFirstNode(tail);
			while(tail->data != last->data)
			{
				if(tail->data > last->data)
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
			helloworl(head);
		}

		else if(choice==3)
		{
			break;
		}
	}
}
