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

int points(const std::array<std::string, 10>& games) {
  int sum = 0;
  for (string str : games){
    string x = str.substr(0, str.find(":"));
    string y = str.substr(str.find(":")+1, str.length());
    if (stoi(x)>stoi(y)) sum+=3;
    if (stoi(x)==stoi(y)) sum+=1;
  }  
  return sum;
}

int master() {
    if (isPalindrom("abba")) { cout << "1"; };
    system("pause");
    return 0;
}
