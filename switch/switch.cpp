#include <iostream>
#include <map>
using namespace std;
//gcc case range https://gcc.gnu.org/onlinedocs/gcc-4.1.2/gcc/Case-Ranges.html
//char getGrade_switch(int a, int b, int c) {
//	int avg = (a + b + c) / 3;
//	switch (avg) {
//	case 90 ... 100: return 'A';
//	case 80 ... 89: return 'B';
//	case 70 ... 79: return 'C';
//	case 60 ... 69: return 'D';
//	default: return 'F';
//	}
//}

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

int main() {
	DNAStrand_2("AAAA");
	system("pause");
	return 0;
}