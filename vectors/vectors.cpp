#include <iostream>;
#include <vector>;
#include <cmath>;
using namespace std;

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

vector<string> split_by_two(const string &s)
{
    string str = s;
    vector<string> res;
    if (str.size()%2!=0) str += "_";
    for (int i = 0; i < str.size(); i += 2) res.push_back(str.substr(i, 2));
    return res;
}

int master() {
	digitize(12322);
	system("pause");
	return 0;
}
