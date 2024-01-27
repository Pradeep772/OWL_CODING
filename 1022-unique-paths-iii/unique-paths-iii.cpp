class Solution {
public:
    int codejava(vector<vector<int>>& grid, int x, int y, int z) {
        if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] == -1) return 0;
        if (grid[x][y] == 2) return z == -1 ? 1 : 0;

        grid[x][y] = -1;
        z--;

        int total = codejava(grid, x + 1, y, z) +
                    codejava(grid, x - 1, y, z) +
                    codejava(grid, x, y + 1, z) +
                    codejava(grid, x, y - 1, z);

        grid[x][y] = 0;
        z++;
        return total;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int z = 0, sx = 0, sy = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    sx = i;
                    sy = j;
                } else if (grid[i][j] == 0) {
                    z++;
                }
            }
        }

        return codejava(grid, sx, sy, z);
    }
};
