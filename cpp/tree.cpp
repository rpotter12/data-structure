#include<iostream>
using namespace std;
int i=0,j=0;
struct node
{
    int data;
    node *l,*r;
    node(int a)
    {
        this->data=a;
        l=r=NULL;
    }
};
void printL(node *newnode)
{
    if(newnode==NULL)
        return;
    printL(newnode->l);
    i++;
    cout<<newnode->data<<" ";
}
void printR(node *newnode)
{
    if(newnode==NULL)
        return;
    printL(newnode->l);
    j++;
    if(j==(i-1))
        return;
    cout<<newnode->data<<" ";
}

int main()
{
    node *root = new node(1);
    root->l             = new node(2);
    root->r         = new node(3);
    root->r->l     = new node(4);
    root->r->r = new node(5);

    cout<<root->data<<" ";
    printL(root->l);
    printR(root->r);
}
