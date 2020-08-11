#include <bits/stdc++.h>
using namespace std;

int max(int x, int y) { return x > y ? x : y; }

class Solution
{
    int rowLen, colLen;
    vector<vector<bool>> visited;
    vector<vector<int>> matrix1;
    int dfs(int i, int j) //, vector<vector<int>> &matrix)
    {
        if (visited[i][j])
            return 0;
        int ans = 0;
        ans = 1;
        visited[i][j] = true;
        if ((i > 0) && (matrix1[i][j] < matrix1[i - 1][j]))
        {
            ans = max(ans, 1 + dfs(i - 1, j));
        }
        if ((i != colLen - 1) && (matrix1[i][j] < matrix1[i + 1][j]))
        {
            ans = max(ans, 1 + dfs(i + 1, j));
        }
        if ((j > 0) && (matrix1[i][j] < matrix1[i][j - 1]))
        {
            ans = max(ans, 1 + dfs(i, j - 1));
        }
        if ((j != rowLen - 1) && (matrix1[i][j] < matrix1[i][j + 1]))
        {
            ans = max(ans, 1 + dfs(i, j + 1));
        }
        visited[i][j] = false;
        return ans;
    }

public:
    int longestIncreasingPath(vector<vector<int>> &matrix)
    {
        colLen = matrix.size();
        if (colLen == 0)
            return 0;
        rowLen = matrix[0].size();
        visited = vector<vector<bool>>(colLen, vector<bool>(rowLen, false));
        matrix1 = matrix;
        int ans = INT_MIN;
        for (int i = 0; i < colLen; i++)
        {
            for (int j = 0; j < rowLen; j++)
            {
                if (!visited[i][j])
                {
                    ans = max(ans, dfs(i, j));
                }
            }
        }
        return ans;
    }
};