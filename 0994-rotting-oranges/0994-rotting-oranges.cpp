class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<pair<int, int>, int>> q;

        vector<vector<int>> visited(n, vector<int>(m, 0));
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                if (grid[row][col] == 2) {
                    q.push({{row, col}, 0});
                    visited[row][col] = 2;
                } else {
                    visited[row][col] = 0;
                }
            }
        }
        int maxtime = 0;
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        while (!q.empty()) {
            int first = q.front().first.first;
            int second = q.front().first.second;
            int time = q.front().second;
            q.pop();
            maxtime = max(maxtime, time);
            for (int i = 0; i < 4; i++) {
                int nrow = first + drow[i];
                int ncol = second + dcol[i];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                    visited[nrow][ncol]== 0 && grid[nrow][ncol] == 1) {
                    q.push({{nrow, ncol}, time + 1});
                    visited[nrow][ncol] = 2;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (visited[i][j] ==0 && grid[i][j] == 1) {
                    return -1;
                }
            }
        }

        return maxtime;
    }
};