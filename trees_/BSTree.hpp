#ifndef BSTREE_HPP
#define BSTREE_HPP 1
#include <iostream>
#include "BinaryTree.hpp"
using namespace std;
template <class Key,class Value>
class BSTree : public BinaryTree< Key, Value> {
 protected:
  BinaryNode<Key,Value> *root;

/* Inherit as many functions as possible from BinaryTree.
 * Only override those where you can decrease the time complexity and where you absolutely need to do it.
 * Also make sure that all inherited functions work correctly in the context of a binary search tree.
 */
 public:
  BSTree()
  {
    root=NULL;
  }
  virtual  void Root(BinaryNode<Key,Value> *x)
  {
    root=x;
  }
  
  virtual BinaryNode<Key,Value> * pre_order(const Key& key)
  { 
    BinaryNode<Key,Value> *y;
    y=root;
    int q=1;     
    while(q)
    {
      if(y->k == key)
      {
        q=0;
      }
      else if(y->k > key)
      {
        y=y->left;
      }
      else
      {
        y=y->right;
      }
    }
    if(y!=NULL)
     return y;
  }

  Value get(const Key& key)
  { 
    int h;
    h=has(key);
    if(h==0)
    { 
      return 0;
    }
    else
    {
    BinaryNode<Key,Value> *y;     
    y=pre_order(key);
    if(y!=NULL)
      return y->val;
    }
  }

   
  

  /* Implement has function which will return true if the given key is present in binary tree 
   * otherwise return false.  
   */
  virtual bool has(const Key& key)
  {
    BinaryNode<Key,Value> *y;
    y=root;
    int q=1;
    while(q && y!=NULL)
    {
      if(y->k == key)
      {
        q=0;
      }
      else if(y->k > key)
      {
        y=y->left;
      }
      else
      {
        y=y->right;
      }
    }
   // y=pre_order(key);
    if(y!=NULL)
    {
       
      return true;
    }
    else 
    {
      return false;
    }
  }
  /* Implement put function such that newly inserted node keep the tree balanced. 
   */ 
  virtual BinaryNode<Key,Value> *createnode()
  {
    BinaryNode<Key,Value> *temp;
    temp=new BinaryNode<Key,Value>;
    temp->parent=NULL;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
  }

  virtual BinaryNode<Key,Value> *balance(BinaryNode<Key,Value> *x,const Key& key)
  {
    BinaryNode<Key,Value> *y,*z;
    y=createnode();
    if(x!=NULL)
    {
      if(key <= x->k)
      {
        if(x->left==NULL)
        {
          x->left=y;
          y->parent=x;
        }
        else
        {
        y=balance(x->left,key);
        }
        
      }
      else
      {
        if(x->right==NULL)
        {
          x->right=y;
          y->parent=x;
        }
        else
        {
        y=balance(x->right,key);    
        }
      }
    }
    return y;
  }
  virtual void put(const Key& key, const Value& value)
  {
    BinaryNode<Key,Value> *y;
    if(root==NULL)
    {

      y=createnode();
      root=y;
      root->val=value;
      root->k=key;
      root->parent=NULL;
      
    }
    else
    {
      BinaryNode<Key,Value> *par,*q,*p;
      y=balance(root,key);
      y->val=value;
      y->k=key;
      par=y->parent;
      q=par->left;
      p=par->right;
      //cout<<y->k<<endl;
      //cout<<"parent"<<par->k<<" ";
      //if(q!= NULL )
        //cout<<"Left"<<q->k<<" ";
      //if(p!=NULL)
        //cout<<"Right"<<p->k<<" ";
      
      //cout<<endl;
    }

  }
  virtual void remove(const Key& key)
  {
    BinaryNode<Key,Value> *x,*temp,*z,*y,*r;
    r=root;//r=Root();
    Key t;
    x=pre_order(key);
    if(x!=root)
    {
    //cout<<x->k;
    if(x->left== NULL || x->right==NULL)
    {
     temp=x;
    }
    else
    { 
      t=successor(x->k);
      temp=pre_order(t);
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
    root=r;
    }
    else
     root=root->right; 
    //this->print_pre_order();
  }
  /*
   *This method print all the key value pairs of the binary tree, as
   *observed in an in order traversal.
   */
  virtual void print_in_order()
  { 
    BinaryNode<Key,Value> *x;
    x=root;
    if(root!=NULL)
    {
      BinaryNode<Key,Value> *a;
      a=root;
      root=a->left;
      print_in_order();
      cout<<a->k<<" ";
      cout<<a->val<<" "<<endl;
      root=a->right;
      print_in_order(); 
    }
    root=x;
  }
  /*
   *This method print all the key value pairs of the binary tree, as
   *observed in an pre order traversal.
   */
  virtual void print_pre_order()
  {
    BinaryNode<Key,Value> *x;
    x=root;
    if(root!=NULL)
    {
      BinaryNode<Key,Value> *a;
      a=root;
      cout<<a->k<<" ";
      cout<<a->val<<" "<<endl;
      root=a->left;
      print_pre_order();
      root=a->right;
      print_pre_order(); 
    }
    root=x;
    
  }
  /*
   *This method print all the key value pairs of the binary tree, as
   *observed in a post order traversal.
   */
  virtual void print_post_order()
  {
    BinaryNode<Key,Value> *x;
    x=root;
    if(root!=NULL)
    {
      BinaryNode<Key,Value> *a;
      a=root;
      root=a->left;
      print_post_order();
      root=a->right;
      print_post_order(); 
      cout<<a->k<<" ";
      cout<<a->val<<" "<<endl;
    }
    root=x;
  }
  /*
   *This method returns the minimum element in the binary tree.
   */
  virtual Key minimum()
  {
    BinaryNode<Key,Value> *x;
    x=root;
    Key m;
    while(x!=NULL)
    {
     m=x->k;
     x=x->left;
    }
    return m;
  }
  /*
   * This method returns the maximum element in the binary tree.
   */
  virtual Key maximum()
  {
    BinaryNode<Key,Value> *x;
    x=root;
    Key m;
    while(x!=NULL)
    {
     m=x->k; 
     x=x->right;
    }
    return m; 
  }
  /*
   *This method returns the successor, i.e, the next larget element in the
   *binary tree, after Key.
   */
  virtual Key successor(const Key& key)
  {
    if(key!=maximum())
    {
    BinaryNode<Key,Value> *x,*temp,*y;
    temp=root;
    x=pre_order(key);
    //cout<<"x"<<x->k<<endl;
    if(x->right!=NULL)
    { 
      root=x->right;
      Key l=minimum();
      root=temp;
      return l;
    }
    y=x->parent;
    //cout<<"par"<<y->k;
    while(y!=NULL && x==y->right)
    {
      x=y;
      if(y->parent!=NULL)
        y=y->parent;
      else
         return root->k;
    }
    root=temp;
    return y->k;
    }
  else
    return 0;
  }
  /*
   * This method returns the predessor, ie, the next smallest element in the
   * binary tree, after Key.
   */
  virtual Key predecessor(const Key& key)
  {
    if(key!=minimum())
    {
    BinaryNode<Key,Value> *x,*temp,*y;
    temp=root;
    x=pre_order(key);
    if(x->left!=NULL)
    { 
      root=x->left;
      Key l=maximum();
      root=temp;
      return l;
    }
    y=x->parent;
    while(y!=NULL && x!= y->right)
    {
      x=y;
      if(y->parent!=NULL)
        y=y->parent;
      else
         return root->k;
    }
    root=temp;
    return y->k;
  }
  else
    return 0; 
  }
  /*
   * This method returns the current height of the binary search tree.
   */
  
  virtual int maxheight(BinaryNode<Key,Value> *y)
  {
    if(y==NULL)
      return 0;
    else
    {
    int lh=maxheight(y->left);
    int rh=maxheight(y->right);
    if(lh<rh)
      return rh+1;
    else
      return lh+1;
    }
  }
  virtual int getHeight()
  {
    if(root==NULL)
      return 0;
    else
    {
       int h=maxheight(root);
       return h;
    }
  }
  /*

   * This method returns the total number of elements in the binary search tree.
   */
  virtual int count( BinaryNode<Key,Value> *x,int c)
  { 
    if(x!=NULL)
    {  
       c=c+1;
       c=count(x->left,c); 
       c=count(x->right,c);
    }
    return c;
  }
  virtual int size()
  { 
    int c=0;
    c=count(root,c);
    return c;
  }
  
  virtual void print()
  {
     print_in_order();
  }
};
 
#endif /* ifndef BSTREE_HPP */