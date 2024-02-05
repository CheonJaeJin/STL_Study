#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> l1{ 10, 20, 30, 40 };
	l1.push_front(40);  // 40, 10, 20, 30, 40
	l1.push_front(30);  // 30, 40, 10, 20, 30, 40

	for (auto a : l1)
		cout << a << ", ";
	cout << endl;

	int cnt = distance(l1.begin(), l1.end());
	cout << cnt << endl; // 6

	l1.remove(40);  // 30, 10, 20, 30
	l1.remove_if([](int n) { return n > 20; }); // 10 20

	for (auto a : l1)
		cout << a << ", ";
	cout << endl;
}