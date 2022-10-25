﻿#include <iostream>
#include <vector>

using namespace std;

void callBFS(vector<vector<char>>& grid, int i, int j)
{
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size() || grid[i][j] == '0') {
        return;
    }

    grid[i][j] = '0';
    callBFS(grid, i + 1, j);
    callBFS(grid, i - 1, j);
    callBFS(grid, i, j + 1);
    callBFS(grid, i, j - 1);
}

int numIslands(vector<vector<char>>& grid)
{
    int count = 0;
    for (int i = 0; i < grid.size(); ++i)
    {
        for (int j = 0; j < grid[i].size(); ++j)
        {
            if (grid[i][j] == '1') {
                ++count;
                callBFS(grid, i, j);
            }            
        }
    }
    return count;
}

//int main()
//{
//    vector<vector<char>> grid = {
//                                    {'1', '1', '0', '0', '0'},
//                                    {'1', '1', '0', '1', '0'},
//                                    {'0', '0', '1', '0', '0'},
//                                    {'0', '0', '0', '1', '1'}
//                                };
//
//    if (numIslands(grid) == 4) 
//    {
//        cout << "Test 2 is ok";
//    }
//}



