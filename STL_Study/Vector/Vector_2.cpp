#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> V1{ 1,2,3,4 };
	cout << V1.capacity() << " : " << V1.size() << endl;

	V1.push_back(5);
	cout << V1.capacity() << " : " << V1.size() << endl;

	V1.push_back(6);
	cout << V1.capacity() << " : " << V1.size() << endl;

	V1.insert(V1.begin(), 0);
	cout << V1.capacity() << " : " << V1.size() << endl;

	// start 포함 , end 포함하지 않는다.
	V1.erase(V1.begin() + 1, V1.begin() + 3);
	cout << V1.capacity() << " : " << V1.size() << endl;

	for (int i = 0; i < V1.size(); i++)
	{
		cout << V1[i] << " , ";
	}
}