#include <iostream>

using namespace std;

template <typename T>
class DynamicArray
{
private:
	unsigned int Sz;
	T* Arr;

public:
	DynamicArray(int Num) : Sz(Num)
	{
		Arr = new T[Sz]{};
	}

	~DynamicArray()
	{
		delete[] Arr;
		cout << "Memory Deleted" << endl;
	}

	unsigned int Size() { return Sz; }

	T& operator[] (const int i) { return Arr[i]; }
	const T& operator[] (const int i) const { return Arr[i]; }

};

int main()
{
	DynamicArray<int> Da(5);
	Da[0] = 10;
	Da[1] = 20;
	Da[2] = 30;

	for (int i = 0; i < Da.Size(); i++)
	{
		cout << Da[i] << endl;
	}
}