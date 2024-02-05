#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

// 문자열 하나를 입력받는다
// 순서를 뒤집고 반환한다.
string reverse(const string& str)
{
	stack<char> stk;

	for (char c : str)
		stk.push(c);

	string res;

	while (!stk.empty()) 
	{
		res += stk.top();
		stk.pop();
	}

	return res;
}


int main()
{
	string str1 = "HELLO";
	string str2 = "ALGORITHIM";

	cout << str1 << "->" << reverse(str1) << endl;
	cout << str2 << "->" << reverse(str2) << endl;
}