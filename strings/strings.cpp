#include <string>
#include <cctype>
#include <typeinfo>
#include <iostream>

using namespace std;
bool isPalindrom(const string& str)
{
    for (int i = 0; i < (int)(str.size()); ++i) {
        cout << typeid(str.size()-i).name() << endl;
        if (tolower(str[i]) != tolower(str[str.size() - i - 1])) {
            return false;
        }
    }
    return true;
}

int master() {
    if (isPalindrom("abba")) { cout << "1"; };
    system("pause");
    return 0;
}