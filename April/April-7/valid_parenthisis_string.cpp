#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool checkValidString(string s) {
    stack<int> openStack;
    stack<int> asteriskStack;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            openStack.push(i);
        } else if (s[i] == '*') {
            asteriskStack.push(i);
        } else { // Closing parenthesis
            if (!openStack.empty()) {
                openStack.pop();
            } else if (!asteriskStack.empty()) {
                asteriskStack.pop();
            } else {
                return false; // No matching parenthesis or asterisk found
            }
        }
    }

    // Match remaining open parentheses with asterisks
    while (!openStack.empty() && !asteriskStack.empty()) {
        if (openStack.top() < asteriskStack.top()) {
            openStack.pop();
            asteriskStack.pop();
        } else {
            break; // No more valid matches
        }
    }

    return openStack.empty();
}

int main() {
    string s = "(((((*(()((((*((**(((()()*)()()()*((((**)())*)*)))))))(())(()))())((*()()(((()((()*(())*(()**)()(())";
    if (checkValidString(s)) {
        cout << "String is valid." << endl;
    } else {
        cout << "String is not valid." << endl;
    }

    return 0;
}
