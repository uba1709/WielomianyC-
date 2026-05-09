#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace std;


int main(){
    int stopien;
    cout << "Podaj stopien wielomianu: ";
    cin >> stopien;

    // Deklaracja wektora o rozmiarze stopien + 1
    // (bo wielomian stopnia n ma n+1 wspolczynnikow)
    vector<double> wielomian(stopien + 1);

    cout << "Podaj wspolczynniki (od najwyzszej potegi):" << endl;

    // Wypelnianie wektora
    for (int i = stopien; i >= 0; i--) {
        cout << "Wspolczynnik przy x^" << i << ": ";
        cin >> wielomian[i];
    }
    return 0;
}