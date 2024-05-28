#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);

	q.pop();
	cout << q.front() << endl;
	q.push(40);

	while (!q.empty()) // ť�� ����ִ� ���°� �ɶ�����
	{
		auto& e = q.front();	// ť ������ ����
		cout << e << endl;		// ���
		q.pop();			// �� �� ������ ����
	}

}