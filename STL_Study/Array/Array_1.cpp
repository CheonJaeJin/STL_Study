#include <iostream>

using namespace std;

int main()
{
	int Scores1[5]	= {};	//모두 0으로 초기화

	int Scores[5]	= { 50, 60, 70, 80, 90 };

	int Size = sizeof(Scores) / sizeof(Scores[0]);	// 20 /4

	int Sum	= 0;

	for (int i = 0; i < Size; i++)
	{
		Sum += Scores[i];
	}

	float M = (float)Sum / Size;

	cout << " 평균 : " << M << endl;
}