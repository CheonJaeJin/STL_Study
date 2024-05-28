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

	while (!q.empty()) // 큐가 비어있는 상태가 될때까지
	{
		auto& e = q.front();	// 큐 데이터 참조
		cout << e << endl;		// 출력
		q.pop();			// 맨 앞 데이터 삭제
	}

}