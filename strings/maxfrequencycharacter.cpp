//Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.
#include <iostream>
#include <string>
#include <unordered_map>

char max_frequency(std::string S) {
    std::unordered_map<char, int> frequency;
    char max_char = '\0';
    int max_count = 0;
    for (const char& c : S) {
        ++frequency[c];
        if (frequency[c] > max_count) {
            max_count = frequency[c];
            max_char = c;
        }
    }
    return max_char;
}

int main() {
    std::string S;
    
    std::getline(std::cin, S);
    char max_c = max_frequency(S);
    std::cout << max_c << std::endl;
    return 0;
}
