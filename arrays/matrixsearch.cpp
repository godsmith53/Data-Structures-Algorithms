#include <iostream>
#include <vector>




bool searchMatrix(std::vector<std::vector<int>> matrix, int x) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == x) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> matrix[i][j];
        }
    }
    int x;
    std::cin >> x;
    if (searchMatrix(matrix, x)) {
        std::cout << "1" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }
    return 0;
}
