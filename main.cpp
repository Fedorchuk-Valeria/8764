#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n = 1;
	double d = 1, sum = 0;
	do {
		d = pow(1.0 / 2, n) + pow(1.0 / 3, n);
		sum += d;
		n++;
	} while (d > pow(10, -3));
	cout << "Result sum = " << sum << endl;

	return 0;
}

