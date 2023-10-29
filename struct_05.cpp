#include <iostream>
using namespace std;

// Mendefinisikan struct untuk merepresentasikan informasi mahasiswa
struct Mahasiswa {
    string nama;
    int nim;
    int nilai[5]; // Array untuk menyimpan nilai mata pelajaran
};

int main() {
    // Membuat objek struct Mahasiswa
    Mahasiswa mahasiswa1;

    // Mengisi data ke dalam objek mahasiswa1
    mahasiswa1.nama = "John Doe";
    mahasiswa1.nim = 123456;
    mahasiswa1.nilai[0] = 90; // Nilai mata pelajaran 1
    mahasiswa1.nilai[1] = 85; // Nilai mata pelajaran 2
    mahasiswa1.nilai[2] = 78; // Nilai mata pelajaran 3
    mahasiswa1.nilai[3] = 92; // Nilai mata pelajaran 4
    mahasiswa1.nilai[4] = 88; // Nilai mata pelajaran 5

    // Menampilkan informasi mahasiswa
    cout << "Nama: " << mahasiswa1.nama << endl;
    cout << "NIM: " << mahasiswa1.nim << endl;
    cout << "Nilai Mata Pelajaran:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Mata Pelajaran " << i + 1 << ": " << mahasiswa1.nilai[i] << endl;
    }

    return 0;
}
