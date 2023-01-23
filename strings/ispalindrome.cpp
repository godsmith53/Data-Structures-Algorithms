//Take as input S, a string. Write a function that returns true if the string is a palindrome and false otherwise. Print the value returned.
#include <iostream>
#include <string>

bool is_palindrome(std::string s) {
    return std::equal(s.begin(), s.end(), s.rbegin());
}

int main() {
    std::string S;
    
    std::getline(std::cin, S);
    if (is_palindrome(S)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    return 0;
}
