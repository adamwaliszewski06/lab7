/* zad 1 - Napisz program, który narysuje na ekranie choinkê z gwiazdek * o wysokoœci n. Wykorzystaj funkcjê
rekurencyjn¹ do wypisywania linii.
*/

#include <iostream>
using namespace std;
int choinka(int n, int i);

int main() {
	int n, i = 1;
	cout << "Podaj wysokosc choinki: ";
	cin >> n;
	choinka(n,i);
	return 0;
}

int choinka(int n, int i) {
	if (i > n)
		return 0; //warunek zakoñczenia rekurencji
	else {
		for (int j = 1; j <= n - i; j++) // spacje po lewej stronie ka¿dej linii choinki, j <= wysokoœæ-i
			//np dla n=3: i=1 -> 2 spacje, i=2 -> 1 spacja, i=3 -> 0 spacji
			cout << " ";
		for (int k = 1; k <= (2 * i - 1); k++) // liczba gwiazdek w danej linii = 2*i-1
			//np dla n=3: i=1 -> 1 gwiazdka, i=2 -> 3 gwiazdki, i=3 -> 5 gwiazdek
			cout << "*";
		cout << endl;
		choinka(n, i + 1);
		return 0;
	}

}
  
/* zad 2 - */

