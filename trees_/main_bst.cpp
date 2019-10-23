#include <iostream>
#include "BSTree.hpp"
using namespace std;

int main()
{
	 
  BSTree<int,int> A;
  int n,p;
  cout<<"BST"<<endl;
  cout<<"enter 1 for insert"<<endl<<"enter 2 for delete"<<endl<<"enter 3 for find"<<endl<<"enter 4 for get"<<endl<<"enter 5 for minimum"<<endl;
  cout<<"enter 6 for maximum"<<endl<<"enter 7 for successor"<<endl<<"enter 8 for predecessor"<<endl<<"enter 9 for print_pre_order"<<endl<<"enter 10 for print_in_order"<<endl;
  cout<<"enter 11 for print_post_order"<<endl<<"enter 12 for size"<<endl ;
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
   cin>>p;
   if(p==1)
   {
    int Key,Value;
    cin>>Key>>Value;
    A.put(Key,Value);
   }
   if(p==2)
   {
    int Key;
    cin>>Key;
    A.remove(Key);
   }
   if(p==3)
   {
    int Key;
    cin>>Key;
    cout<<A.has(Key)<<endl;
   }
   if(p==4)
   {
    int Key;
    cin>>Key;
    cout<<A.get(Key)<<endl;
   }
   if(p==5)
   {
    cout<<A.minimum()<<endl;
   }
   if(p==6)
   {
    cout<<A.maximum()<<endl;
   }
   if(p==7)
   {
    int Key;
    cin>>Key;
    cout<<A.successor(Key)<<endl;
   }
   if(p==8)
   {
    int Key;
    cin>>Key;
    cout<<A.predecessor(Key)<<endl;
   }
   if(p==9)
   {
    cout<<"print_pre_order"<<endl;
    A.print_pre_order();
   }
   if(p==10)
   {
    cout<<"print_in_order"<<endl;
    A.print_in_order();
   }
   if(p==11)
   {
    cout<<"print_post_order"<<endl;
    A.print_post_order();
   }
   if(p==12)
   {
    cout<<A.size()<<endl;
   }

  }
}
   

