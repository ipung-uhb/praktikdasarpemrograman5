#include <iostream>
using namespace std;

// Mendefinisikan fungsi tanpa nilai kembali (void)
void sapa() {
    cout << "Halo, dunia!" << endl;
}

// Mendefinisikan fungsi dengan nilai kembali (int)
int tambah(int a, int b) {
    return a + b;
}

int main() {
    // Memanggil fungsi sapa
    sapa();

    // Memanggil fungsi tambah
    int hasil = tambah(5, 3);
    cout << "Hasil penambahan: " << hasil << endl;

    return 0;
}
