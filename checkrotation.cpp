#include <iostream>
#include <string>

using namespace std;

bool isRotation(const string& str1, const string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    string concatenated = str1 + str1;
    return concatenated.find(str2);
}

    int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (isRotation(str1, str2)) {
        cout << str2 << " is a rotation of " << str1 << endl;
    } else {
        cout << str2 << " is not a rotation of " << str1 << endl;
    }

    return 0;
}
