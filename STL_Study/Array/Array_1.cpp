#include <iostream>

using namespace std;

int main()
{
	int scores[5] = { 50, 60, 70, 80, 90 };

	//	int sz = sizeof(scores) / sizeof(scores[0]);
	int sz = size(scores);

	int s = 0;
	for (int i = 0; i < sz; i++) {
		s += scores[i];
	}

	float m = (float)s / sz;

	cout << "Mean score: " << m << endl;
}