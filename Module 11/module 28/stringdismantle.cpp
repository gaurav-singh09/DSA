#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence = "hello world this is Gaurav";
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        cout << word << endl;
    }

    return 0;
}