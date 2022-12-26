#include <iostream>
//gcc case range https://gcc.gnu.org/onlinedocs/gcc-4.1.2/gcc/Case-Ranges.html
char getGrade(int a, int b, int c) {
	int avg = (a + b + c) / 3;
	switch (avg) {
	case 90 ... 100: return 'A';
	case 80 ... 89: return 'B';
	case 70 ... 79: return 'C';
	case 60 ... 69: return 'D';
	default: return 'F';
	}
}