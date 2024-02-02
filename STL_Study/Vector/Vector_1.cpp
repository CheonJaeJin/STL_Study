#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> V1;
	vector<int> V2(10); // V2[0] ~ V2[9]
	vector<int> V3(10, 1); // V3 모든 엘리먼트 초기값이 1
	vector<int> V4{10, 20, 30, 40, 50};

	vector<int> V5 = V4;
	vector<int> V6(V4.begin(), V4.begin() + 3); // 10, 20, 30

	for (int i = 0; i < V6.size(); i++)
	{
		cout << V6[i] << endl;
	}

	// 행 갯수, 원소형태(행), 원소값
	vector<vector<int>> Mat1(2, vector<int>(3, 1));

	vector<vector<int>> Mat2
	{
		{1,2,3},
		{4,5,6}
	};

	for (int r = 0; r < Mat2.size(); r++)
	{
		for (int c = 0; c < Mat2[r].size(); c++)
		{
			cout << Mat2[r][c] << " , ";
		}
		cout << endl;
	}
}