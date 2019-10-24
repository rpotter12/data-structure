#ifndef BINARYTREE_HPP
#define BINARYTREE_HPP 1
#include <iostream>
using namespace std;
template <class Key, class Value>
class BinaryNode
{
public:
	Key k;
	Value val;
	BinaryNode<Key,Value> * left,* right,* parent;
    /*Default constructor. Should assign the default value to key and value
     */
	BinaryNode()
  {
    //k=0;
    val=0;
  }
	/*This contructor should assign the key and val from the passed parameters
     */
	BinaryNode(Key key, Value value)
  {
    k=key;
    val=value;
  }
};

template<class Key,class Value>
class BinaryTree
{
	/* You can implement your own helper functions whenever required.
	 */
protected:
	BinaryNode<Key,Value> *root;
  int len;

public:
  /* Implement get function to retrieve the value corresponding to given key in binary tree.
   */
  BinaryTree()
  {
    root=NULL;
  }
  
  
  virtual BinaryNode<Key,Value>* pre_order(BinaryNode<Key,Value> *x,const Key& key)
  {
    if(x!=NULL)
    { 

      if(x->k==key)
      {  
        return x;
      }
      x=pre_order(x->left,key); 
      x=pre_order(x->right,key);
    }
    return NULL;
  }

  Value get(const Key& key)
  { 
    BinaryNode<Key,Value> *y;     
    y=pre_order(root,key);
   // cout<<"y->val"<<y->val;
    return y->val;
  }

  virtual BinaryNode<Key,Value> *Root()
  {
    return root;
  }
  /* Implement remove function that can delete a node in binary tree with given key. 
   */
  virtual void remove(const Key& key)
  {
    
  }
  /* Implement has function which will return true if the given key is present in binary tree 
   * otherwise return false.  
   */
  virtual bool has(const Key& key)
  {
  
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
  
   virtual void insert(BinaryNode<Key,Value> *x,const Key &key,const Value& value)
   {
    if(x->left == NULL)
    {
      BinaryNode<Key,Value> *y,*z,*a;
      y=createnode();
      x->left=y;
      y->parent=x;
      y->val=value;
      y->k=key;
      z=x->left;
      a=y->parent;
      //cout<<"left"<<z->val<<" "<<"parent"<<a->val<<endl;

    }
    else if(x->right == NULL)
    {
      BinaryNode<Key,Value> *y,*a,*z;
      y=createnode();
      x->right=y;
      y->parent=x;
      y->val=value;
      y->k=key;
      z=x->right;
      a=y->parent;
      //cout<<"right"<<z->val<<" "<<"parent"<<a->val<<endl;
    }
    else
    {
      BinaryNode<Key,Value> *p,*q;
      p=x->left;
      if(p->left!= NULL && p->right != NULL)
      {
        x=x->right;
        insert(x,key,value);
      }
      else
      {
        x=x->left;
        insert(x,key,value);
      }
    }

  }
  virtual void put(const Key& key, const Value& value)
  {
 
    
    if(root==NULL)
    {
      BinaryNode<Key,Value> *y;
      y=createnode();
      root=y;
      root->val=value;
      root->k=key;
      //cout<<value<<" ";
    }
    else
    {
      insert(root,key,value);
    }
  }
  /*
   *This method print all the key value pairs of the binary tree, as
   *observed in an in order traversal.
   */
  /*virtual void print_in_order(BinaryNode<Key,Value> *x)
  { 
    if(x!=NULL)
    {
      print_in_order(x->left);
      cout<<x->val<<" ";
      print_in_order(x->right); 
    }
  }*/
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
   *This method returns the minimum element in the binary tree.
   */
  //virtual Key minimum();
  /*
   * This method returns the maximum element in the binary tree.
   */
  //virtual Key maximum();
  /*
   *This method returns the successor, i.e, the next larget element in the
   *binary tree, after Key.
   */
  //virtual Key successor(const Key& key);
  /*
   * This method returns the predessor, ie, the next smallest element in the
   * binary tree, after Key.
   */
  //virtual Key predecessor(const Key& key);
};

#endif /*  */