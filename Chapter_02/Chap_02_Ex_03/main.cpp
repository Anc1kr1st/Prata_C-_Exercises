/*
Chapter 02 Exercise 03

Napi�te program v jazyce C++ se t?emi u�ivatelsky definovan�mi funkcemi (main() se po?�ta za jednu), jeho� v�stup je n�sleduj�c�: 
Tri slepe mysi
Tri slepe mysi
Divejte se, jak utikaji
Divejte se, jak utikaji
Prvni funkce, kter� je vol�na dvakr�t, by m?la vypsat prvn� dva ?�dky a druh� funkce, kter� je tak� vol�na dvakr�t, by m?la obstarat zb�vaj�ci v�stup.
*/

#include <iostream>

using namespace std;

void f1() {
	cout << "Tri slepe mysi\n";
}
void f2() {
	cout << "Divejte se, jak utikaji\n";
}

int main() {
	f1();
	f1();
	f2();
	f2();

	return 0;
}