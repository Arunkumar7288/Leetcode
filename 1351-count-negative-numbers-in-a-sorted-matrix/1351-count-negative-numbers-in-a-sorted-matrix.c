#include <stdio.h>

int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int m = gridSize;
    int n = gridColSize[0];
    int i = m - 1; // Start at the bottom-left row
    int j = 0;     // Start at the bottom-left column
    int ans = 0;
    
    while (i >= 0 && j < n) {
        if (grid[i][j] < 0) {
            // If it's negative, this element and all elements to its right are negative
            ans += (n - j);
            i--; // Move up
        } else {
            // If it's positive, move right
            j++;
        }
    }
    
    return ans;
}