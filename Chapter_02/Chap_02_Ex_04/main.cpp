/*
Chapter 02 Exercise 04

Napi�te program, v jeho� funkci main() je vol�na u�ivatelksy definovan� funkce, kter� jako argument p?ij�m� teplotu ve stupn�ch Celsia 
a vrac� stejnou hodnotu ve stupn�ch Fahrenheita. Program by m?l po��dat u�ivatele o vstup hodnoty ve stupn�ch Celsia a zobrazit v�sledek, 
viz n�sleduj�ci k�d: 
Zadejte prosim hodnotu ve stupnich Celsia: 20
20 stupnu Celsia je 68 stupnu Fahrenheita.
Zde je vzorec pro p?evod: 
Fahrenheit = 1.8 x stupn? Celsia + 32.0
*/

#include <iostream>

using namespace std;

int main() {
	int enter;
	int fahrenheit;

	cout << "Please, enter value in degrees celsium: ";
	cin >> enter;
	fahrenheit = 1.8 * enter + 32;

	cout << endl;
	cout << enter << " degrees celsium is " << fahrenheit << " degrees fahrenheit.";

	return 0;
}