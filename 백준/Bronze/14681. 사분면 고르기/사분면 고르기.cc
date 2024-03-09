#include <iostream>
using namespace std;

int main() {

	int a,b;
	int result;

	cin >> a>>b;

	if (a > 0)
		if (b > 0) result = 1;

		else result = 4;


	else
		if (b < 0) result = 3;
		else result = 2;

	cout << result << endl;
	return 0;
}