#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows)
{
	vector<vector<int>> triangle;
	if (numRows == 0)
	{
		return triangle;
	}

	vector<int> firstRow = { 1 };
	triangle.push_back(firstRow);

	for (int i = 1; i < numRows; i++)
	{
		vector<int> prev_row = triangle[i - 1];
		vector<int> row = { 1 };

		for (int j = 1; j < i; j++)
		{
			row.push_back(prev_row[j - 1] + prev_row[j]);
		}

		row.push_back(1);
		triangle.push_back(row);
	}

	return triangle;

}
