#ifndef AVL_HPP
#define AVL_HPP 1
#include "BSTree.hpp"
#include <iostream>
using namespace std;
template <class Key,class Value> 
class AVLnode :public BinaryNode<Key,Value>
{
 public:
  int height;
  AVLnode(Key k,Value v):BinaryNode<Key,Value>(k,v)
  {
    height=0;
  }

 };
template <class Key,class Value>
class AVL : public BSTree<Key, Value>
{
  public:

  virtual void leftRotate(BinaryNode<Key,Value> *x)
  {
    BinaryNode<Key,Value> *t,*temp1,*temp2,*temp3;
    temp1=x->left;
    temp2=x->parent;
    temp3=temp2->parent;
    if(temp3==NULL)
      this->root=x;
    if(temp3!=NULL && temp2 == temp3->left)
      temp3->left=x;
    else if(temp3!=NULL && temp2 == temp3->right)
      temp3->right=x;
    x->left=temp2;
    temp2->parent=x;
    temp2->right=temp1;
    if(temp1!=NULL)
    temp1->parent=temp2;
    x->parent=temp3;
    t=x->parent;
    /*cout<<"par"<<t->k<<endl;
    cout<<"xll"<<x->k<<endl;
    cout<<"end"<<endl; */
  }
 
    virtual void rightRotate(BinaryNode<Key,Value> *x)
    {
    BinaryNode<Key,Value> *temp1,*temp2,*temp3,*t;
    temp1=x->right;
    temp2=x->parent;
    temp3=temp2->parent;
    if(temp3==NULL)
      this->Root(x);
      //this->root=x;
    if(temp3!=NULL && temp2 == temp3->left)
      temp3->left=x;
    else if(temp3!=NULL && temp2 == temp3->right)
      temp3->right=x;
    x->right=temp2;
    temp2->parent=x;
    temp2->left=temp1;
    if(temp1!=NULL)
      temp1->parent=temp2;
    x->parent=temp3;
    t=x->parent;
   /*cout<<"par"<<t->k<<endl;
    cout<<"xrr"<<x->k<<endl;
    cout<<"end//"<<endl;*/
    //this->print_pre_order();
    }

    virtual int getBalance(BinaryNode<Key,Value> *x)
    {
      int balance_factor=this->maxheight(x->left)-this->maxheight(x->right);
      return balance_factor;
    }
    
    virtual void doBalance(BinaryNode<Key,Value> *x )
    {
      int q=1;
      //if(key!=this->root->k){
      if(x==this->root)
      {
        if(getBalance(x)>1)
          rightRotate(x->left);
        if(getBalance(x)<-1)
          leftRotate(x->right);
        q=0;
      }
      //else
      //{
      
      //cout<<"enter"<<endl;
      BinaryNode<Key,Value> *node,*gnode,*gpnode,*pnode,*y,*r;
      r=this->root;
     // x=this->pre_order(key);
      //cout<<"x"<<x->k<<endl;
      pnode=x->parent;
      while(q!=0)
      {
        //cout<<"pnode"<<pnode->k<<endl;
        int b=getBalance(pnode);
        //cout<<"b"<<b<<endl;
        if(b<-1)
        {
          node=pnode->right;
          //cout<<"node"<<node->k;
          int ch=getBalance(node);
          if(ch<0)
          {
            leftRotate(node);
            //this->print_pre_order();
            //cout<<"leftRotate"<<endl;
          }
          else 
          {
            //cout<<"right then left"<<endl;
            rightRotate(node->left);
            //this->print_pre_order();
            leftRotate(node->parent);
            //this->print_pre_order();
          }
        }
        else if(b>1)
        {
          node=pnode->left;
          //cout<<node->k;
          int ch=getBalance(node);
          //cout<<"ch"<<ch;
          if(ch>0)
          {
            rightRotate(node);
            //this->print_pre_order();
            //cout<<"rightRotate"<<endl;
          }
          else 
          {
            //this->print_pre_order();
            //cout<<"left then right"<<endl;
            leftRotate(node->right);
            rightRotate(node->parent);
            //this->print_pre_order();
          }
        }
        if(pnode==r)//this->root)
        {
         q=0;
        }
        pnode=pnode->parent;
      } 

          
    //}
    }
 
  /*
   * Inherit as much functionality as possible from the BSTree class.
   * Then provide custom AVL Tree functionality on top of that.
   * The AVL Tree should make use of as many BST functions as possible.
   * Override only those methods which are extremely necessary.
   */
  /*
   * Apart from that, your code should have the following four functions:
   * getBalance(node) -> To get the balance at any given node;
   * doBalance(node) -> To fix the balance at the given node;
   * rightRotate(node) -> Perform a right rotation about the given node.
   * leftRotate(node) -> Perform a left rotation about the given node.
   *
   * The signature of these functions are not provided in order to provide you
   * some flexibility in how you implement the internals of your AVL Tree. But
   * make sure these functions are there.
   */
  virtual void put(const Key &key,const Value &value)
  {
    BinaryNode<Key,Value> *y;
    //BinaryNode<Key,Value> *y;
    if(this->root==NULL)
    {

      y=this->createnode();
      this->root=y;
      this->root->val=value;
      this->root->k=key;
      this->root->parent=NULL;
      
    }
    else
    {
      BinaryNode<Key,Value> *par,*q,*p;
      y=this->balance(this->root,key);
      y->val=value;
      y->k=key;
      par=y->parent;
      q=par->left;
      p=par->right;
      /*cout<<y->k<<endl;
      cout<<"parent"<<par->k<<" ";
      if(q!= NULL )
        cout<<"Left"<<q->k<<" ";
      if(p!=NULL)
        cout<<"Right"<<p->k<<" ";
      
      cout<<endl;*/
    }
    //this->put(key,value);

    //y=(this->pre_order(key));
    doBalance(y);
  }
  virtual void remove(const Key& key)
  {
    BinaryNode<Key,Value> *x,*temp,*z,*y,*r,*par;
    r=this->root;//r=Root();
    Key t;
    x=this->pre_order(key);
    par=x->parent;
    //cout<<x->k;
    if(x->left== NULL || x->right==NULL)
    {
     temp=x;
    }
    else
    { 
      t=this->successor(x->k);
      temp=this->pre_order(t);
    }
    if(temp->left!=NULL )
      z=temp->left;
    else
      z=temp->right;
    if(z!= NULL)
      z->parent=temp->parent;
    y=temp->parent;
    if(temp==y->left)
      y->left=z;
    else
      y->right=z;
    if(temp!=x)
    {
      x->k=temp->k;
      x->val=temp->val;
    }
    temp->parent=NULL;
    temp->right=NULL;
    temp->left=NULL;
    this->root=r;

    if(par!=NULL)
      doBalance(par);
    else
    {
      if(getBalance(x)>1)
        rightRotate(x->left);
      if(getBalance(x)<-1)
        leftRotate(x->right);
 
    }

  }
/*int find(BinaryNode<Key,Value> *y,Key K)
{
  BinaryNode<Key,Value> *temp;
  int count=0;
  temp=y;
  while(temp->k!= K)
  {
   Key a=this->predecessor(temp->k);
   temp=this->pre_order(a);
   if(temp->val > y->val)
   {
    count++;
   }
  }
  return count;

void result(int *array)
{ 
    BinaryNode<Key,Value> *x;
    x=this->root;
    m=minimum()
    if(this->root!=NULL)
    {
      BinaryNode<Key,Value> *a;
      a=this->root;
      cout<<find(a)<<endl;
      cout<< a->k<<" "<<a->val<<" "<<array[a->val]<<endl;
      this->root=a->left;
      this->result(array);
      this->root=a->right;
      this->result(array); 
    }
    this->root=x;
}*/
int find(BinaryNode<Key,Value> *y)
{
  BinaryNode<Key,Value> *temp;
  int count=0;
  temp=y;

  while(temp->k!=this->minimum())
  {
   Key a=this->predecessor(temp->k);
  // cout<<endl<<a<<"l"<<temp->k;
   temp=this->pre_order(a);
   //cout<<"hi"<<y->k<<this->minimum()<<endl;
   if(temp->val > y->val)
   {
    count++;
   }  
 }
  return count;
}
void result(int *array,BinaryNode<Key,Value> *a)
{ 
  
    if(a!=NULL)
    {
      //cout<<"entere"<<a->k<<endl; 
      int h= a->val;
      array[h]=find(a);
      //cout<<a->k <<" "<<find(a)<<endl;
      //cout<<"ans"<<a->val<<" "<<array[a->val]<<endl;
      result(array,a->left);
      result(array,a->right);
    }
}
void ans()
{
  int n=this->size();
  int array[n];

  for (int i = 1; i <=n; ++i)
  {
    array[i]=0;
  }
  result(array,this->root);
  for (int i = 1; i <=n; ++i)
  {
    cout<<array[i]<<" ";
  }

}
int find2(BinaryNode<Key,Value> *y,int n)
{
  //cout<<"start"<<endl;
  int min=n;
  BinaryNode<Key,Value> *temp;
  temp=y;
 // cout<<this->maximum()<<endl;
  while(temp->k!=this->maximum())
  {
    //cout<<"inn"<<endl;
   Key a=this->successor(temp->k);
   temp=this->pre_order(a);
   int h=(temp->val-y->val);
   if(h<0)
     h=(-1)*h;
   if(min > h)
   {
    min=h;
    if(min==1)
     {
      //cout<<"break"<<endl;
        break;  
     }
   }  
   //cout<<"min"<<min<<endl;
 }
 if(min==n)
   return -1;
 else
  return min;
}
void result2(int *array,BinaryNode<Key,Value> *a,int n)
{ 
  
    if(a!=NULL)
    {
      //cout<<"entere"<<a->k<<endl;
      int h= a->val;
      //cout<<h;
      array[h]=find2(a,n);
      //cout<<a->k <<" "<<find2(a,n)<<endl;
      //cout<<"ans"<<a->val<<" "<<array[a->val]<<endl;*/
      result2(array,a->left,n);
      result2(array,a->right,n);
    }
}
void ans2()
{
  int n=this->size();
  int array[n];

  for (int i = 1; i <=n; ++i)
  {
    array[i]=0;
  }
  result2(array,this->root,n);
  for (int i = 1; i <=n; ++i)
  {
    cout<<array[i]<<" ";
  }

}

};

#endif /* ifndef AVL_HPP */