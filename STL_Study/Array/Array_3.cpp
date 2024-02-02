#include <iostream>

using namespace std;

int main()
{
	int* Ptr = new int [3] {};
	Ptr[0] = 10;
	Ptr[1] = 20;

	for (int i = 0; i < 3; i++)
	{
		cout << Ptr[i] << endl;
	}

	delete[] Ptr;
	Ptr = nullptr;
}