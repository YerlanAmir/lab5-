#include <iostream>
#include <deque>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    getline(cin, word);
    deque<char> d;
    for (char c : word) {
        d.push_back(c);
    }
    bool check = true;
    while (d.size() > 1) {
        if (d.front() != d.back()) {
            check = false;
            break;
        }
        d.pop_front();
        d.pop_back();
    }

    if (check)
        cout << "It is a palindrome." << endl;
    else
        cout << "It is not a palindrome." << endl;

    return 0;
}
