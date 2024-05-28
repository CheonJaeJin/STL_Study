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

	std::list<T> Lst; // 데이터 저장
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

	while (!q.Empty()) // 큐가 비어있는 상태가 될때까지
	{
		auto& e = q.Front();	// 큐 데이터 참조
		cout << e << endl;		// 출력
		q.Dequeue();			// 맨 앞 데이터 삭제
	}

}