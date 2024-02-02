#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* prev_address;
	Node* next_address;
};

class DoublyLinkedList
{
private:
	int count;
	Node* header;
	Node* trailer;


public:
	DoublyLinkedList()
	{
		count = 0;
		header = new Node{ 0, nullptr, nullptr };
		trailer = new Node{ 0, nullptr, nullptr };

		header->next_address = trailer;
		trailer->prev_address = header;
	}

	~DoublyLinkedList()
	{
		while (!empty()) 
		{
			pop_front();
		}

		delete header;
		delete trailer;
	}

public:

	// 노드 p 앞에 val 값을 갖는 새로운 노드를 삽입
	void insert(Node* p, int val)
	{
		Node* new_node = new Node{ val, p->prev_address, p };
		new_node->prev_address->next_address = new_node;
		new_node->next_address->prev_address = new_node;
		count++;
	}

	void push_front(int val)
	{
		insert(header->next_address, val);
	}

	void push_back(int val)
	{
		insert(trailer, val);
	}

	// 노드 p를 삭제
	void erase(Node* p)
	{
		p->prev_address->next_address = p->next_address;
		p->next_address->prev_address = p->prev_address;
		
		delete p;
		count--;
	}

	void pop_front()
	{
		if (!empty())
			erase(header->next_address);
	}

	void pop_back()
	{
		if (!empty())
			erase(trailer->prev_address);
	}

	bool empty() const
	{
		return count == 0;
	}

	int size() const
	{
		return count;
	}
	
	void print_all() const
	{
		Node* curr = header->next_address;

		while (curr != trailer) {
			cout << curr->data << ", ";
			curr = curr->next_address;
		}

		cout << endl;
	}

	void print_reverse() const
	{
		Node* curr = trailer->prev_address;

		while (curr != header) {
			cout << curr->data << ", ";
			curr = curr->prev_address;
		}

		cout << endl;
	}

};


int main()
{
	DoublyLinkedList ll;
	ll.push_back(10);
	ll.push_back(20);
	ll.push_back(30);
	ll.print_all();
	ll.print_reverse();

	// ll: header -> 10 -> 20 -> 30 -> trailer

	ll.pop_front();
	ll.pop_back();
	ll.print_all();

	ll.push_front(100);
	ll.push_back(400);
	ll.print_all();
}