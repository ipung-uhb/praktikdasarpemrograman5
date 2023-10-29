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
    // Membuat beberapa instance dari struct Mahasiswa
    Mahasiswa mahasiswa1;
    Mahasiswa mahasiswa2;

    // Menginisialisasi variabel anggota untuk setiap mahasiswa
    mahasiswa1.nama = "Alice";
    mahasiswa1.umur = 20;
    mahasiswa1.jenis_kelamin = 'F';
    mahasiswa1.ipk = 3.75;

    mahasiswa2.nama = "Bob";
    mahasiswa2.umur = 22;
    mahasiswa2.jenis_kelamin = 'M';
    mahasiswa2.ipk = 3.60;

    // Mencetak informasi tentang mahasiswa
    std::cout << "Data Mahasiswa 1:" << std::endl;
    std::cout << "Nama: " << mahasiswa1.nama << std::endl;
    std::cout << "Umur: " << mahasiswa1.umur << std::endl;
    std::cout << "Jenis Kelamin: " << mahasiswa1.jenis_kelamin << std::endl;
    std::cout << "IPK: " << mahasiswa1.ipk << std::endl;

    std::cout << "\nData Mahasiswa 2:" << std::endl;
    std::cout << "Nama: " << mahasiswa2.nama << std::endl;
    std::cout << "Umur: " << mahasiswa2.umur << std::endl;
    std::cout << "Jenis Kelamin: " << mahasiswa2.jenis_kelamin << std::endl;
    std::cout << "IPK: " << mahasiswa2.ipk << std::endl;

    return 0;
}
