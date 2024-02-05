#include<iostream>
#include<list>

using namespace std;

int main()
{
	list<int> l1; // 비어있는 형태

	l1.push_back(10);	// 10
	l1.push_back(20);	// 10 - 20

	list<int> l2{ 10, 20, 30 ,40 };

	for (const auto& n : l2)
	{
		cout << n << " , ";
	}
	cout << endl;

	// l2의 맨 마지막 위치에다가 l1 을 붙혀라!

	l2.splice(l2.end(), l1);		// 10 20 30 40 10 20
	// l1 은 비어 있는 형태로 변함

	for (const auto& n : l2)
	{
		cout << n << " , ";
	}

	cout << endl;

	l2.sort();						// 10 10 20 20 30 40 
	l2.unique();					// 10 20 30 40

	for (const auto& n : l2)
	{
		cout << n << " , ";
	}
}