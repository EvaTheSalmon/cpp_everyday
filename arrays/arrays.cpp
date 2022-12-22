#include <iostream>;
#include <vector>;
#include <cmath>;
using namespace std;

vector<int> digitize(unsigned long n)
{
	vector<int> arr;
	int base = log10(n);
	
	for (int i = 0; i < base + 1; ++i) {
		//cout << n % 10 << endl;
		n = n / 10;
		arr.push_back(n %10);
	}
	return arr;
}

int main() {
	digitize(12322);
	system("pause");
	return 0;
}