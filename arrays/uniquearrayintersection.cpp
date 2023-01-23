#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>

std::vector<int> intersection(std::vector<int> array1, std::vector<int> array2) {
    std::unordered_set<int> set1(array1.begin(), array1.end());
    std::vector<int> result;
    for (int i : array2) {
        if (set1.count(i)) {
            result.push_back(i);
            set1.erase(i);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> array1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> array1[i];
    }
    std::vector<int> array2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> array2[i];
    }
    std::vector<int> result = intersection(array1, array2);
    std::cout << "[";
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i];
        if (i != result.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
    return 0;
}
