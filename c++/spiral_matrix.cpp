#include <vector>
class Solution {
public:
  std::vector<int> spiralOrder(std::vector<std::vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    std::vector<int> final_vector;
    bool traversing = true;
    int edges_found = 0;
    int current_x = 0;
    int current_y = 0;
    int x_min = 0, y_min = 0;
    if (m < 1 || n > 10) {
      return final_vector;
    } else if (m == 1) {
      return matrix[0];
    }
    m = m - 1;
    n = n - 1;
    while (traversing) {
      // Go right
      if (current_x > n) {
        return final_vector;
      }
      for (int i = current_x; i <= n; i++) {
        current_x = i;
        final_vector.push_back(matrix[current_y][current_x]);
        edges_found = 0;
      }
      edges_found++;
      if (current_y == m) {
        return final_vector;
      }
      // Go down
      for (int i = current_y; i < m; i++) {

        current_y += 1;
        final_vector.push_back(matrix[current_y][current_x]);
      }
      edges_found++;
      if (current_x == x_min) {
        return final_vector;
      }
      // Go left
      for (int i = current_x; i > x_min; i--) {
        if ((current_x - 1) < 0) {
          break;
        }
        current_x--;
        final_vector.push_back(matrix[current_y][current_x]);
      }
      y_min++;
      edges_found++;
      if (current_y == y_min) {
        return final_vector;
      }
      // Go up
      for (int i = current_y; i > y_min; i--) {
        if ((current_y - 1) == 0) {
          break;
        }
        current_y--;
        final_vector.push_back(matrix[current_y][current_x]);
      }
      edges_found++;
      if (current_x < n) {
        current_x += 1;
      } else {
        traversing = false;
        return final_vector;
      }
      n--;
      m--;
      x_min++;
      if (edges_found >= 5) {
        traversing = false;
        return final_vector;
      }
    }

    return final_vector;
  }
};
