#include <iostream>
#include <list>

using namespace std;

template <typename T>
class Queue
{
public:
	Queue() {}

	void Enqueue(const T& e) { Lst.push_back(e); }
	void Dequeue() { Lst.pop_front(); }
	const T& Front() const { return Lst.front(); }

	bool Empty() const { return Lst.empty(); }
	int Size() const { return Lst.size(); }

private:

	std::list<T> Lst; // ������ ����
};


int main()
{
	Queue<int> q;
	q.Enqueue(10);
	q.Enqueue(20);
	q.Enqueue(30);

	q.Dequeue();
	cout << q.Front() << endl;
	q.Enqueue(40);

	while (!q.Empty()) // ť�� ����ִ� ���°� �ɶ�����
	{
		auto& e = q.Front();	// ť ������ ����
		cout << e << endl;		// ���
		q.Dequeue();			// �� �� ������ ����
	}

}