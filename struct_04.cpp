#include <iostream>
#include <string>

// Mendefinisikan struct dengan beberapa variabel anggota
struct Mahasiswa {
    std::string nama;
    int umur;
    char jenis_kelamin;
    double ipk;
};

int main() {
    Mahasiswa mahasiswa1;

    // Menginputkan data ke dalam struct Mahasiswa
    std::cout << "Masukkan Nama Mahasiswa: ";
    std::cin >> mahasiswa1.nama;

    std::cout << "Masukkan Umur Mahasiswa: ";
    std::cin >> mahasiswa1.umur;

    std::cout << "Masukkan Jenis Kelamin (M/F): ";
    std::cin >> mahasiswa1.jenis_kelamin;

    std::cout << "Masukkan IPK Mahasiswa: ";
    std::cin >> mahasiswa1.ipk;

    // Mencetak data yang diinputkan
    std::cout << "\nData Mahasiswa 1:" << std::endl;
    std::cout << "Nama: " << mahasiswa1.nama << std::endl;
    std::cout << "Umur: " << mahasiswa1.umur << std::endl;
    std::cout << "Jenis Kelamin: " << mahasiswa1.jenis_kelamin << std::endl;
    std::cout << "IPK: " << mahasiswa1.ipk << std::endl;

    return 0;
}
