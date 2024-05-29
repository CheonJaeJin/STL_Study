#include <iostream>

#define MAX_QUEUE 10

using namespace std;

template <typename T>
class CircularQueue
{
public:
	CircularQueue(int Size = MAX_QUEUE)
	{
		Arr = new T[Size];
		Front_Idx = 0;
		Rear_Idx = -1;
		Count = 0;
		Capacity = Size;
	}
	~CircularQueue()
	{
		delete[] Arr;
	}

	void Enqueue(const T& Data)
	{
		if (Full())
		{
			cout << "Overflow error!" << endl;
			return;
		}

		Rear_Idx = (Rear_Idx + 1) % Capacity;
		Arr[Rear_Idx] = Data;
		Count++;
	}

	void Dequeue()
	{
		if (Empty())
		{
			cout << "Underflow error!" << endl;
		}

		Front_Idx = (Front_Idx + 1) % Capacity;
		Count--;
	}

	bool Full() const { return Count == Capacity; }
	bool Empty() const { return Count == 0; }

	const T& Front() const { return Arr[Front_Idx]; }
	int Size() const { return Count; }

private:
	T* Arr;
	int Front_Idx;
	int Rear_Idx;
	int Count;
	int Capacity;
};


int main()
{
	CircularQueue<int> q(5);
	q.Enqueue(10);
	q.Enqueue(20);
	q.Enqueue(30);
	q.Enqueue(40);
	q.Enqueue(50);  // full 상태
	q.Dequeue();
	q.Dequeue();    // 원소 2개 삭제
	q.Enqueue(60);
	q.Enqueue(70);  // full 상태
	q.Enqueue(80);  // 오버플로우 에러!

	while (!q.Empty())
	{
		auto& e = q.Front();
		cout << e << " , ";
		q.Dequeue();
	}
	cout << endl;

}