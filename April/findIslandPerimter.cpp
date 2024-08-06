#include <iostream>
#include <vector>
using namespace std;

int islandPerimeter(vector<vector<int>>& grid) {
    int perimeter = 0;
    int rows = grid.size();
    int cols = grid[0].size();

    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                if (i == 0 || grid[i - 1][j] == 0)
                    perimeter++;
                if (i == rows - 1 || grid[i + 1][j] == 0)
                    perimeter++;
                if (j == 0 || grid[i][j - 1] == 0)
                    perimeter++;
                if (j == cols - 1 || grid[i][j + 1] == 0)
                    perimeter++;
            }
        }
    }

    return perimeter;
}

int main() {
    vector<vector<int>> grid = {
        {0, 1, 0, 0},
        {1, 1, 1, 0},
        {0, 1, 0, 0},
        {1, 1, 0, 0}
    };

    cout << islandPerimeter(grid);

    return 0;
}
