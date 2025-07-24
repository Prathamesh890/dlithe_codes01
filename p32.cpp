#include <iostream>
#include <vector>
using namespace std;

// Returns true if all subject marks are greater than or equal to the passing mark
bool check_pass_all_subjects(const vector<int>& marks, int passing_mark = 35) {
    for (int mark : marks) {
        if (mark < passing_mark)
            return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of subjects: ";
    cin >> n;

    vector<int> marks(n);
    cout << "Enter the marks for each subject:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> marks[i];
    }

    if (check_pass_all_subjects(marks))
        cout << "Passed all subjects." << endl;
    else
        cout << "Failed in one or more subjects." << endl;

    return 0;
}
