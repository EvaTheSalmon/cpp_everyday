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


using namespace std;

vector<string> split_string(const string str, char delimiter){
    vector<string> vector_of_words;
    string buffer = "";
    for (int i=0; i<=(int)str.length();++i){
        if (str[i]==delimiter || i==(int)str.length()){
            vector_of_words.push_back(buffer);
            buffer="";
        } else {
            buffer+=str[i];
        }
    }
    return vector_of_words;
}

string spinWords(const string str){
    vector<string> split = split_string(str, ' ');
    string string_of_words;
    for (string i: split){
        if (i.length()>4) {
            reverse(i.begin(), i.end()); 
            string_of_words+=i+" ";
        } else {
            string_of_words+=i+" ";
        }
    }
    return string_of_words.substr(0, string_of_words.size()-1);
}


int master() {
	digitize(12322);
	system("pause");
	return 0;
}
