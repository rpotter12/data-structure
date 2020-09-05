# include<iostream>
using namespace std;
class Stack
{
    int top;
    public:
    int a[10];
    Stack()
    {
        top = -1;
    }
    void push(int x);
    int pop();
    bool isEmpty();
};
void Stack::push(int x)
{
    if(top >= 10)
    {
        cout << "Stack Overflow \n";
    }
    else
    {
        a[++top] = x;
        cout << "Element Inserted into Stack\n";
    }
}
int Stack::pop()
{
    if(top < 0)
    {
        cout << "Stack Underflow \n";
        return 0;
    }
    else
    {
        int d = a[top--];
        return d;
    }
}
bool Stack::isEmpty()
{
    if(top < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
class Queue {
    public:
    Stack S1, S2;
    void enqueue(int x);
    int dequeue();
};
void Queue :: enqueue(int x)
{
    S1.push(x);
    cout << "Element Inserted into Queue\n";
}
int Queue :: dequeue()
{
    int x, y;
    while(!S1.isEmpty())
    {
        x = S1.pop();
        S2.push(x);
    }
    y = S2.pop();
    while(!S2.isEmpty())
    {
        x = S2.pop();
        S1.push(x);
    }

    return y;
}
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    cout << "Removing element from queue " <<  q.dequeue();

    return 0;
}
