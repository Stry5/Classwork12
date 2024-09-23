
#include <iostream>
#include <ctime>
using namespace std;

int factorial(int, int);

int main()
{

	cout << "please input a positive number.\n";
	int x,result = 1;
	cin >> x;
	cout << factorial(x, result);

}

int factorial(int x, int result) {
	if (x > 0) {
		result = x * factorial(x - 1, result);
		cout << "x" << x << endl;
		cout << "r" << result << endl;
	}
	return result;
}


