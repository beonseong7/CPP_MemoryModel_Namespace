#include<iostream>
#include "calculation_func.h"
int main()
{
	using namespace std;
	cout << "please input math" << endl;
	char math;
	double result;
	int x, y;
	cin >> x >> math >> y;
	cout << x << "..." << math << "..." << y << endl;
	if (math == '+') {
		result = add(x, y);
	}
	else if (math == '-') {
		result = min(x, y);
	}
	else if (math == '*') {
		result = mul(x, y);
	}
	else if (math == '/') {
		result = divide(x, y);
	}
	cout << x << math << y << "=" << result << endl;
	return 0;
}                                  