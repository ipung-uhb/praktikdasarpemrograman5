#include <iostream>
using namespace std;

// Fungsi overload dengan dua parameter int
int tambah(int a, int b) {
    return a + b;
}

// Fungsi overload dengan dua parameter double
double tambah(double a, double b) {
    return a + b;
}

// Fungsi overload dengan tiga parameter int
int tambah(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int x = 5, y = 7;
    double m = 3.5, n = 2.5;
    
    // Memanggil fungsi tambah dengan dua parameter int
    cout << "Hasil tambah (int): " << tambah(x, y) << endl;

    // Memanggil fungsi tambah dengan dua parameter double
    cout << "Hasil tambah (double): " << tambah(m, n) << endl;

    // Memanggil fungsi tambah dengan tiga parameter int
    cout << "Hasil tambah (int): " << tambah(x, y, x) << endl;

    return 0;
}
