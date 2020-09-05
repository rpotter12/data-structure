#include <bits/stdc++.h>
using namespace std;
#define SIZE 10

template <class X>
class queue
{
	X *arr;
	int capacity;
	int front;
	int rear;
	int count;

public:
	queue(int size = SIZE);

	void dequeue();
	void enqueue(X x);
	X peek();
	int size();
	bool isEmpty();
	bool isFull();
};
template <class X>
queue<X>::queue(int size)
{
	arr = new X[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;
}
template <class X>
void queue<X>::dequeue()
{
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Removing " << arr[front] << '\n';

	front = (front + 1) % capacity;
	count--;
}

template <class X>
void queue<X>::enqueue(X item)
{
	if (isFull())
	{
		cout << "OverFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Inserting " << item << '\n';

	rear = (rear + 1) % capacity;
	arr[rear] = item;
	count++;
}

template <class X>
X queue<X>::peek()
{
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}
	return arr[front];
}

template <class X>
int queue<X>::size()
{
	return count;
}

template <class X>
bool queue<X>::isEmpty()
{
	return (size() == 0);
}

template <class X>
bool queue<X>::isFull()
{
	return (size() == capacity);
}

int main()
{
	queue<string> q(4);

	q.enqueue("a");
	q.enqueue("1.1");
	q.enqueue("1");
	q.enqueue("2");

	cout << "Front element is : " << q.peek() << endl<<endl;
	q.dequeue();

	q.enqueue("b");

	cout << "\nQueue size is : " << q.size() << endl;

	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();

	if (q.isEmpty())
		cout << "\nQueue Is Empty\n";
	else
		cout << "\nQueue Is Not Empty\n";
    cout<<"\n17BCS1884";

	return 0;
}
