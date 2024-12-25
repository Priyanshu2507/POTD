#include <iostream>
#include <string>
#include <set>
#include <cctype>
using namespace std;
bool isPangram(const string& str) {
 
    set<char> letters;
 
 
    for (char c : str) {
        if (isalpha(c)) { 
            letters.insert(tolower(c)); 
        }
    }
    return letters.size() == 26;
 
}
 
int main() {
    string input;
    cout << "Enter the string: ";
    getline(cin, input); 
 
    if (isPangram(input)) {
        cout << "The string is a pangram.\n";
    } else {
    cout << "The string is not a pangram.\n";
    }
 
    return 0;
}