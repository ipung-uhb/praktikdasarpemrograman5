#include <iostream>
using namespace std;

double hitungRataRata(int arr[], int panjang) {
    int total = 0;
    for (int i = 0; i < panjang; i++) {
        total += arr[i];
    }
    return static_cast<double>(total) / panjang;
}

int main() {
    int nilai[] = {85, 90, 78, 92, 88};
    int panjangArray = sizeof(nilai) / sizeof(nilai[0]);

    double rataRata = hitungRataRata(nilai, panjangArray);
    cout << "Rata-rata nilai: " << rataRata << endl;

    return 0;
}
