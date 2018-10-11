#include<iostream>
using namespace std;
struct Queue
{
    int f,r,si,*arr;
    Queue(int z)
    {
        f=r=-1;
        si=z;
        arr = new int[z];
    }

    void enQueue(int item);
    void deQueue();
    void display();
};
void Queue::enQueue(int item)
{
    if(f==0 && r==si-1)
    {
        cout<<"\nQueue is FULL"<<endl;
        return;
    }
    else if(f==-1)
    {
        f=r=0;
        arr[r]=item;
    }
    else if(r==si-1&&f!= 0)
    {
        r=0;
        arr[r]=item;
    }
    else
    {
        r++;
        arr[r]=item;
    }
}
void Queue::deQueue()
{
    if (f==-1)
    {
        cout<<"\nQueue is EMPTY"<<endl;;
        cout<<"\ndeleted value: "<<INT_MIN<<endl;
        return;
    }
    int data = arr[f];
    arr[f] = -1;
    if (f==r)
    {
        f=-1;
        r=-1;
    }
    else if(f==si-1)
        f=0;
    else
        f++;
    cout<<"\ndeleted value: "<<data<<endl;;
}
void Queue::display()
{
    if (f==-1)
    {
        cout<<"\nQueue is EMPTY"<<endl;
        return;
    }
    cout<<"\nElements in Circular Queue are: ";
    if (r>=f)
    {
        for (int i=f;i<=r;i++)
            cout<<arr[i]<<" ";
    }
    else
    {
        for (int i = f; i < si; i++)
            cout<<arr[i]<<" ";

        for (int i = 0; i <= r; i++)
            cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int s;
    cout<<"enter size of queue: ";
    cin>>s;
    Queue q(s);
    while(1)
    {
        cout<<"1. insetion"<<endl;
        cout<<"2. deletion"<<endl;
        cout<<"3. display"<<endl;
        int n;
        cout<<"enter choice: ";
        cin>>n;
        switch(n)
        {
            case 1: int item;
                    cout<<"enter value: ";
                    cin>>item;
                    q.enQueue(item);
                    break;
            case 2: q.deQueue();
                    break;
            case 3: q.display();
                    break;
            default: cout<<"wrong choice"<<endl;
        }
    }
}
