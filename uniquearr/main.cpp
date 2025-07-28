#include <iostream>
using namespace std;

string removeSpecialCharacters(string str) {
    string result = "";

    for (int i = 0; i < str.length(); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= '0' && str[i] <= '9')) {
            result += str[i];
        }
    }

    return result;
}


int main() {
    string input;
    cout << "ENTER TEH S: ";
    getline(cin, input);

    string fresult = removeSpecialCharacters(input);

    cout << "FINAL OUTPYT: " << fresult << endl;

    return 0;
}
