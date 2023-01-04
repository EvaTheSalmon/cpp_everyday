#include <iostream>
#include <map>

#include <vector>
#include <cmath>

#include <string>
#include <cctype>
#include <typeinfo>

using namespace std;

int hello_world() {
	printf("Hello World\r\n");
	system("pause");
	return 0;
}

// ------------------------------- switch/case -------------------------------

char getGrade(int a, int b, int c) {
	auto score = (a + b + c) / 3;
	if (score >= 90) return 'A';
	if (score >= 80) return 'B';
	if (score >= 70) return 'C';
	if (score >= 60) return 'D';
	return 'F';
}

string DNAStrand_1(const std::string& dna)
{
	auto str = dna;
	for (int i = 0; i < (int)str.size(); ++i) { //size === length https://en.cppreference.com/w/cpp/string/basic_string
		switch (str[i]) {
		case ('A'): str[i] = 'T'; break;
		case ('T'): str[i] = 'A'; break;
		case ('C'): str[i] = 'G'; break;
		case ('G'): str[i] = 'C'; break;
		}
	}
	return str;
}

// using map to replace text
const std::map<char, char> mapping =
{
  {'A', 'T'},
  {'T', 'A'},
  {'C', 'G'},
  {'G', 'C'},
};

std::string DNAStrand_2(std::string dna)
{
	for (char& c : dna)
	{
		c = mapping.at(c);
	}
	return dna;
}

// ------------------------------- strings -------------------------------

bool isPalindrom(const string& str)
{
	for (int i = 0; i < (int)(str.size()); ++i) {
		cout << typeid(str.size() - i).name() << endl;
		if (tolower(str[i]) != tolower(str[str.size() - i - 1])) {
			return false;
		}
	}
	return true;
}


int points(const vector<string>& games) {
	int sum = 0;
	for (string str : games) {
		string x = str.substr(0, str.find(":"));
		string y = str.substr(str.find(":") + 1, str.length());
		if (stoi(x) > stoi(y)) sum += 3;
		if (stoi(x) == stoi(y)) sum += 1;
	}
	return sum;
}

// ------------------------------- vectors -------------------------------

vector<int> digitize(unsigned long n)
{
	vector<int> arr;
	int base = (n > 0) ? log10(n) + 1 : 1;
	for (int i = 0; i < base; ++i) {
		arr.push_back(n % 10);
		n = n / 10;
	}
	return arr;
}

int square_sum(const std::vector<int>& numbers)
{
	int sum = 0;
	//for by collection
	for (auto x : numbers) {
		sum += x * x;
	}
	return sum;
}

vector<string> split_by_two(const string& s)
{
	string str = s;
	vector<string> res;
	if (str.size() % 2 != 0) str += "_";
	for (int i = 0; i < str.size(); i += 2) res.push_back(str.substr(i, 2));
	return res;
}

vector<string> split_string(const string str, char delimiter) {
	vector<string> vector_of_words;
	string buffer = "";
	for (int i = 0; i <= (int)str.length(); ++i) {
		if (str[i] == delimiter || i == (int)str.length()) {
			vector_of_words.push_back(buffer);
			buffer = "";
		}
		else {
			buffer += str[i];
		}
	}
	return vector_of_words;
}

string spinWords(const string str) {
	vector<string> split = split_string(str, ' ');
	string string_of_words;
	for (string i : split) {
		if (i.length() > 4) {
			reverse(i.begin(), i.end());
			string_of_words += i + " ";
		}
		else {
			string_of_words += i + " ";
		}
	}
	return string_of_words.substr(0, string_of_words.size() - 1);
}

// ------------------------------- types -------------------------------

int types() {

	double d = 0;
	while (cin >> d) {
		int i = d;
		char c = i;
		int i2 = c;
		cout << " d==" << d
			<< " i==" << i
			<< " i2==" << i2
			<< " char (" << c << ")\n";
	}
	return 0;
}