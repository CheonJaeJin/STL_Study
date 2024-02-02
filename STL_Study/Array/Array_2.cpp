#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 5> Scores = { 50, 60, 70, 80, 90 };

	int S = 0;
	for (int i = 0; i < Scores.size(); i++)
	{
		S += Scores[i];
	}
	
	float M = (float)S / Scores.size();

	cout << "Mean Scores : " << M << endl;
}