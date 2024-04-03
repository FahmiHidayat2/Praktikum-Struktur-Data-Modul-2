#include <iostream>
#include <limits> // Untuk menggunakan std::numeric_limits
using namespace std;

int main() {
    int n;

    // Meminta pengguna untuk memasukkan panjang array
    cout << "Masukkan panjang array: ";
    cin >> n;

    // Deklarasi array sesuai dengan panjang yang dimasukkan oleh pengguna
    int array[n];

    // Memasukkan elemen-elemen array
    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Array ke-" << (i+1) << ": ";
        cin >> array[i];
    }

    // Menampilkan menu dan meminta pengguna untuk memilih opsi
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Hitung Nilai Rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int maks = array[0];
                for (int i = 1; i < n; ++i) {
                    if (array[i] > maks) {
                        maks = array[i];
                    }
                }
                cout << "Nilai Maksimum: " << maks << endl;
                break;
            }
            case 2: {
                int min = array[0];
                for (int i = 1; i < n; ++i) {
                    if (array[i] < min) {
                        min = array[i];
                    }
                }
                cout << "Nilai Minimum: " << min << endl;
                break;
            }
            case 3: {
                int total = 0;
                for (int i = 0; i < n; ++i) {
                    total += array[i];
                }
                double rata = static_cast<double>(total) / n;
                cout << "Nilai Rata-rata: " << rata << endl;
                break;
            }
            case 4:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Opsi tidak valid. Masukkan nomor 1-4.\n";
        }
    } while(choice != 4);

    return 0;
}

