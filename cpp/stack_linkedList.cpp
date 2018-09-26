#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*top=NULL;
void push(int a);
void pop();
void display();
void searchstack();

int main()
{
    bool quit=false;
    while(!quit)
    {
        cout<<"1. insertion"<<endl;
        cout<<"2. deletion"<<endl;
        cout<<"3. display"<<endl;
        cout<<"4. search"<<endl;
        cout<<"5. quit"<<endl;
        int ch;
        cout<<"enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1: int n;
                    cout<<"enter number to insert: ";
                    cin>>n;
                    push(n);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: searchstack();
                    break;
            case 5: quit=true;
                    break;
            default: cout<<"choosed error......"<<endl;
                    break;
        }
    }
}

void push(int a)
{
    node *newnode=new node;
    newnode->data=a;
    if(top==NULL)
        newnode->next=NULL;
    else
        newnode->next=top;
    top=newnode;
    cout<<a<<" is inserted."<<endl;
}

void pop()
{
    if(top==NULL)
        cout<<"stack is empty."<<endl;
    else
    {
        node *temp=top;
        cout<<temp->data<<" is deleted"<<endl;
        top=temp->next;
        free(temp);
    }
}

void display()
{
    if(top==NULL)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        node *temp=top;
        while(temp->next != NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
}

void searchstack()
{
    int n;
    cout<<"enter number to search: ";
    cin>>n;
    if(top==NULL)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        node *temp=top;
        int z=0;
        while(1)
        {
            if(temp->data==n)
            {
                z=temp->data;
                break;
            }
            else if(temp->next==NULL)
            {
                break;
            }
            else
            {
                temp=temp->next;
            }
        }
        if(n==z)
        {
            cout<<n<<" is found."<<endl;
        }
        else
            cout<<n<<" is not found."<<endl;
    }
}
