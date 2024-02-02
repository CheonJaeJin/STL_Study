#include <iostream>

using namespace std;

struct Node
{
	int date;
	Node* nextAddress;
};

class LinkedList
{
private:
	Node* head;

public:
	LinkedList() : head(NULL) {}
	~LinkedList()
	{
	}

public:

	void PushFront(int val)
	{
		Node* newnode = new Node{ val, head };
		
		if (head != NULL)
		{     
			newnode->nextAddress = head;
		}

		head = newnode;
	}

	void PopFront()
	{
		if (head == NULL)
		{
			return;
		}

		Node* first = head;
		head = head->nextAddress;
		delete first;
	}
	
	bool Empty() const
	{
		// head가 NULL과 동일한지를 비교 
		// NULL이라면 true 반환
		return head == NULL;
	}

	void PrintALL() const
	{
		Node* current = head;
		while (current != NULL)
		{
			cout << current->date << " , ";
			current = current->nextAddress;
		}
		cout << endl;
	}

};

int main()
{
	LinkedList ll;

	ll.PushFront(10);
	ll.PushFront(20);
	ll.PushFront(30);
	ll.PrintALL();

	ll.PopFront();
	ll.PrintALL();

	ll.PopFront();
	ll.PrintALL();

}