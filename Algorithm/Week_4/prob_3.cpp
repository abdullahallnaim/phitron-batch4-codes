class Solution
{
public:
    bool vis[305][305];

    vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    bool isValid(int i, int j, int r, int c)
    {
        return i >= 0 and i < r and j >= 0 and j < c;
    }

    void dfs(int i, int j, vector<vector<char>> &grid)
    {
        vis[i][j] = true;
        for (auto child : moves)
        {
            int si = i + child.first;
            int sj = j + child.second;
            if (isValid(si, sj, grid.size(), grid[0].size()) && vis[si][sj] == false && grid[si][sj] == '1')
            {
                dfs(si, sj, grid);
            }
        }
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int r = grid.size();
        int c = grid[0].size();
        int cnt = 0; // island count korbe
        memset(vis, false, sizeof(vis));
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (vis[i][j] == false and grid[i][j] == '1')
                {
                    cnt++;
                    dfs(i, j, grid);
                }
            }
        }

        return cnt;
    }
};