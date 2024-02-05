#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> stk;
	stk.push(10);
	stk.push(20);
	stk.push(30);		// 10 20 30

	stk.pop();			// 10 20

	cout << stk.top() << endl; // 20
	
	stk.push(40);


	while (!stk.empty())		// ������ �� ������
	{
		auto& e = stk.top();	// ������ ����
		cout << e << endl;
		stk.pop();
	}

	cout << endl;
}