#include <iostream>

// Mendefinisikan sebuah struct bernama "Person"
struct Person {
    // Variabel anggota (data field)
    std::string name;
    int age;
};

int main() {
    // Membuat sebuah instance dari struct Person
    Person person1;

    // Menginisialisasi variabel anggota
    person1.name = "John";
    person1.age = 30;

    // Mengakses dan mencetak nilainya
    std::cout << "Nama: " << person1.name << std::endl;
    std::cout << "Usia: " << person1.age << std::endl;

    return 0;
}
