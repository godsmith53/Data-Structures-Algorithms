/*
Take sb (source number system base), db (destination number system base) and sn (number in source format). Write a function that converts sn to its counterpart in destination number system. Print the value returned.

Input Format
Constraints
0 < N <= 1000000000
sb and db <= 10

Output Format
Sample Input
8
2 
33
Sample Output
11011
Explanation
All input output is as integers and in separate lines.*/
#include <iostream>
#include <string>
using namespace std;

// Function to convert a number from one base to another
string convertBase(int sn, int sb, int db) {
    // Convert the source number to decimal first
    int decimal = 0, multiplier = 1;
    while (sn > 0) {
        int digit = sn % 10;
        decimal += digit * multiplier;
        multiplier *= sb;
        sn /= 10;
    }

    // Convert the decimal number to destination base
    string result = "";
    while (decimal > 0) {
        int digit = decimal % db;
        result = to_string(digit) + result;
        decimal /= db;
    }

    return result;
}

int main() {
    int sb, db, sn;
    cin >> sb >> db >> sn;
    string result = convertBase(sn, sb, db);
    cout << result << endl;
    return 0;
}
