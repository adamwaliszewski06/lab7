/* #include <iostream>
using namespace std;

int silnia(int n);
int main() { //kod 07_02
    int n;
    cout << "Podaj wartosc liczby n: ";
    cin >> n;
    cout << "n! = " << silnia(n) << endl;

    return 0;
}

int silnia(int n) {
    if (n == 0)
        return 1;
    else //wywolanie funkcji przez sama siebie ze zmienionym argumentem
        return n * silnia(n - 1);
}
*/