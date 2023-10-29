#include <iostream>
using namespace std;

int cariNilaiMaksimum(int arr[], int panjang) {
    int maksimum = arr[0];
    for (int i = 1; i < panjang; i++) {
        if (arr[i] > maksimum) {
            maksimum = arr[i];
        }
    }
    return maksimum;
}

int main() {
    int data[] = {85, 90, 78, 92, 88};
    int panjangArray = sizeof(data) / sizeof(data[0]);

    int maksimum = cariNilaiMaksimum(data, panjangArray);
    cout << "Nilai maksimum: " << maksimum << endl;

    return 0;
}
