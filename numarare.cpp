#include <iostream>
#define NMAX 20
using namespace std;
int v[NMAX], n, x;
int numarare(int);
int main()
{
	int i;
	cout << "n = "; cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "v[" << i << "]: ";
		cin >> v[i];
	}
	cout << "x = "; cin >> x;
	cout << numarare(0);
	return 0;
}
int numarare(int pas)
{
	if (pas == n)
	{
		return 0;
	}
	if (x == v[pas])
	{
		return 1 + numarare(pas+1);
	}
	return numarare(pas+1);
}
/*
 * Deoarece la fiecare apel recursiv se utilizeaza aceleasi valori pentru v, n si x
 * nu le-am transmis prin parametri, ci le-am considerat variabile globale.
 * Aceasta tehnica, prin care reducem numarul de parametri alocati pe stiva, reprezinta
 * o importanta optimizare a subprogramelor recursive.
**/
