/*
Chapter 02 Exercise 02

Napi�te program v jazyce C++, kter� se v�s zept� na vzd�lenost v jednotk�ch furlong a zadanou hodnotu p?evede na yardy (jeden furlong je 220 yard�).
*/

#include <iostream>

using namespace std;

int main() {
	int distance;
	int result;
	cout << "Enter distance in furlong: \n";
	cin >> distance;
	cout << endl;
	result = distance * 220;
	cout << result;

	return 0;
}
