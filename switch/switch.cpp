#include <iostream>
//gcc case range https://gcc.gnu.org/onlinedocs/gcc-4.1.2/gcc/Case-Ranges.html
char getGrade_switch(int a, int b, int c) {
	int avg = (a + b + c) / 3;
	switch (avg) {
	case 90 ... 100: return 'A';
	case 80 ... 89: return 'B';
	case 70 ... 79: return 'C';
	case 60 ... 69: return 'D';
	default: return 'F';
	}
}

char getGrade(int a, int b, int c) {
	auto score = (a + b + c) / 3;
	if (score >= 90) return 'A';
	if (score >= 80) return 'B';
	if (score >= 70) return 'C';
	if (score >= 60) return 'D';
	return 'F';
}

int main() {
	getGrade(70, 60, 100);
	system("pause");
	return 0;
}