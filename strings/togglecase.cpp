/*Take as input S, a string. Write a function that toggles the case of all characters in the string. Print the value returned.

Input Format
String

Constraints
Length of string should be between 1 to 1000.

Output Format
String

Sample Input
abC
Sample Output
ABc
Explanation
Toggle Case means to change UpperCase character to LowerCase character and vice-versa.*/
#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 'a' - 'A'; // converting uppercase to lowercase
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 'a' - 'A'; // converting lowercase to uppercase
        }
    }
    cout<<str;
    return 0;
}
