#include <iostream>
using namespace std;

// Mendefinisikan struct untuk merepresentasikan informasi mahasiswa
struct Mahasiswa {
    string nama;
    int nim;
    int nilai[5]; // Array untuk menyimpan nilai mata pelajaran
};

int main() {
    // Membuat array dari struct Mahasiswa
    const int jumlahMahasiswa = 3;
    Mahasiswa mahasiswa[jumlahMahasiswa];

    // Mengisi data ke dalam objek mahasiswa menggunakan looping
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Masukkan data untuk Mahasiswa " << i + 1 << ":" << endl;
        cout << "Nama: ";
        cin >> mahasiswa[i].nama;
        cout << "NIM: ";
        cin >> mahasiswa[i].nim;

        for (int j = 0; j < 5; j++) {
            cout << "Masukkan nilai Mata Pelajaran " << j + 1 << ": ";
            cin >> mahasiswa[i].nilai[j];
        }
    }

    // Menampilkan informasi mahasiswa
    cout << "Informasi Mahasiswa:" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Mahasiswa " << i + 1 << ":" << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nilai Mata Pelajaran:" << endl;
        for (int j = 0; j < 5; j++) {
            cout << "Mata Pelajaran " << j + 1 << ": " << mahasiswa[i].nilai[j] << endl;
        }
        cout << endl;
    }

    return 0;
}
