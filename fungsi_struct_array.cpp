#include <iostream>
using namespace std;

// Mendefinisikan struct untuk merepresentasikan informasi mahasiswa
struct Mahasiswa {
    string nama;
    int nim;
    int nilai[5]; // Array untuk menyimpan nilai mata pelajaran
};

// Fungsi untuk mengisi data mahasiswa
void isiDataMahasiswa(Mahasiswa mahasiswa[], int jumlah) {
    for (int i = 0; i < jumlah; i++) {
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
}

// Fungsi untuk menampilkan data mahasiswa
void tampilkanDataMahasiswa(Mahasiswa mahasiswa[], int jumlah) {
    cout << "Informasi Mahasiswa:" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << "Mahasiswa " << i + 1 << ":" << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nilai Mata Pelajaran:" << endl;
        for (int j = 0; j < 5; j++) {
            cout << "Mata Pelajaran " << j + 1 << ": " << mahasiswa[i].nilai[j] << endl;
        }
        cout << endl;
    }
}

int main() {
    const int jumlahMahasiswa = 3;
    Mahasiswa daftarMahasiswa[jumlahMahasiswa];

    isiDataMahasiswa(daftarMahasiswa, jumlahMahasiswa);
    tampilkanDataMahasiswa(daftarMahasiswa, jumlahMahasiswa);

    return 0;
}
