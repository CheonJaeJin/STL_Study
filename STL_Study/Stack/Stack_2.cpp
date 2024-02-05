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


	while (!stk.empty())		// 스택이 빌 때까지
	{
		auto& e = stk.top();	// 맨위를 참조
		cout << e << endl;
		stk.pop();
	}

	cout << endl;
}