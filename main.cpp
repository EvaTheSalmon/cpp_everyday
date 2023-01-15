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


//Write a function that takes a string of braces, and determines if the order of the braces is valid. It should return true if the string is valid, and false if it's invalid.
//Better to use stack and add openning brackets to it, then try to pop closing 
#include <algorithm>

bool valid_braces(std::string braces) {
  while (braces.length()>1){
    int old_len = braces.length();
    
    size_t pos1 = braces.find("()");
    if (pos1 != std::string::npos){
      braces.erase(pos1, 2);
    }
    
    size_t pos2 = braces.find("[]");
    if (pos2 != std::string::npos){
      braces.erase(pos2, 2);
    }
    
    size_t pos3 = braces.find("{}");
    if (pos3 != std::string::npos){
      braces.erase(pos3, 2);
    }
    
    int new_len = braces.length();
    if (new_len == old_len) { return false; }
  }
  return (braces.length()!=1);
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

//You are given an array(which will have a length of at least 3, but could be very large) containing integers.The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N.Write a method that takes the array as an argumentand returns this "outlier" N.
int FindOutlier(vector<int> arr)
{
	int even_quantity = 0, odd_quantity = 0,
		even_number = 0, odd_number = 0;
	for (int element : arr) {
		if (element % 2 == 0) {
			even_quantity++;
			even_number = element;
		}
		else {
			odd_quantity++;
			odd_number = element;
		}
	}
	return (even_quantity > odd_quantity) ? odd_number : even_number;
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
