# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Fahmi Hidayat</p>

## Dasar Teori
Array merupakan suatu kumpulan data 
terstruktur yang berupa sejumlah data sejenis 
(memiliki jenis data yang sama) yang 
jumlahnya tetap dan diberi suatu nama 
tertentu.

### 1. Array 1 Dimensi: 
Array satu dimensi adalah kumpulan elemen data yang diindeks oleh satu nomor atau satu variabel. Ini adalah struktur data sederhana yang menyimpan elemen-elemen dalam urutan linier. Misalnya, array satu dimensi bisa digunakan untuk menyimpan daftar nilai-nilai integer seperti [1, 2, 3, 4, 5] atau daftar nama seperti ["John", "Alice", "Bob"].

#### Contoh :
```C++
#include <iostream>
using namespace std;
int main() {
int arr[5] = {9, 3, 5, 2, 1}; //deklarasi array
cout<< arr[1] << endl;
cout<< arr[4];
}
```
#### Output :
3

### 2.Array 2 Dimensi: 
Array dua dimensi adalah array yang memiliki baris dan kolom. Ini seperti tabel atau matriks. Setiap elemen dalam array dua dimensi diakses menggunakan dua indeks, satu untuk baris dan satu untuk kolom. Misalnya, [[1, 2, 3], [4, 5, 6], [7, 8, 9]] adalah array dua dimensi dengan tiga baris dan tiga kolom.
#### Contoh :
```C++
#include <iostream>
using namespace std;
int main() {
int arr[2][2] = {{3, 2}, {2, 5}};
for (int i=0; i<2; i++) { //baris
for(int j=0; j<2; j++) { //kolom
cout<< arr[i][j] << ends;
};
cout << endl;
};
}
```
#### Output :
3 2
2 5

### 3.Array 3 Dimensi: 
Array tiga dimensi adalah kumpulan dari beberapa array dua dimensi. Setiap array dua dimensi dalam array tiga dimensi bisa dianggap sebagai "layer" dari array tiga dimensi tersebut. Array tiga dimensi dapat digunakan untuk merepresentasikan data yang memerlukan lebih dari dua dimensi. Contohnya bisa seperti [[[1, 2], [3, 4]], [[5, 6], [7, 8]]], di mana ini adalah array tiga dimensi dengan dua lapisan, masing-masing memiliki dua baris dan dua kolom.
#### Contoh :
```C++
#include <iostream>
using namespace std;
int main() {
int arr[2][2][3] = {{{2, 8, 7}, {6, 5, 1}}, {{8,
5, 2}, {9, 2 ,7}}};
for (int i=0; i<2; i++) {
for(int j=0; j<2; j++) {
for(int k=0; k<3; k++) {
cout<< arr[i][j][k] << ends;
};
cout<< endl;
};
cout<< endl;
};
}
```
#### Output :
2 8 7
6 5 1
8 5 2
9 2 7

### 4.Array 4 Dimensi: 
Array empat dimensi adalah kumpulan dari beberapa array tiga dimensi. Ini adalah konsep yang lebih abstrak dan jarang digunakan dalam pemrograman konvensional. Namun, dalam beberapa kasus, ini mungkin digunakan untuk memodelkan data yang sangat kompleks. Misalnya, data video mungkin direpresentasikan sebagai array empat dimensi di mana dimensi pertama mewakili waktu, dimensi kedua dan ketiga mewakili tinggi dan lebar gambar, dan dimensi keempat mewakili saluran warna.
Contoh :
```C++
int arr [3][2][4][4];
```
### 5.Array 5 Dimensi: 
Array lima dimensi adalah generalisasi dari konsep yang sama dengan dimensi yang lebih tinggi. Ini sangat jarang digunakan dalam konteks pemrograman umum dan lebih sering muncul dalam konteks pemrosesan data ilmiah atau teknis yang kompleks, seperti dalam pengolahan citra medis atau simulasi fisika. Representasi abstrak seperti ini mungkin sulit untuk dibayangkan secara langsung, tetapi konsepnya mirip dengan array dimensi lebih rendah, hanya dengan lebih banyak dimensi yang ditambahkan.
#### Contoh :
```C++
int arr [2][4][4][3][3];
```

## Guided 

### 1. Program Input Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
// Deklarasi array
int arr[2][3][3];
// Input elemen
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << "Input Array[" << x << "][" << y << "][" << z <<
"] = ";
cin >> arr[x][y][z];
}
}
cout << endl;
}
// Output Array
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << "Data Array[" << x << "][" << y << "][" << z <<
"] = " << arr[x][y][z] << endl;
}
}
}
cout << endl;
// Tampilan array
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << arr[x][y][z] << ends;
}
cout << endl;
}
cout << endl;
}
}
```

Program tersebut mengimplementasikan input dan output dari array tiga dimensi. Pertama, program meminta pengguna untuk memasukkan nilai-nilai elemen array tiga dimensi dengan menggunakan loop for bersarang. Setelah semua elemen dimasukkan, program menampilkan semua elemen array yang telah dimasukkan. Terakhir, program menampilkan array dalam format tabel untuk memudahkan pembacaan.

### Output
<img width="212" alt="image" src="https://github.com/FahmiHidayat2/Praktikum-Struktur-Data-Modul-2/assets/161399477/41c959f0-d6a7-48e3-8be5-37134faaf9ad">

### 2. Program Mencari Nilai Maksimal pada Array
```C++
#include <iostream>
using namespace std;
int main()
{
int maks, a, i = 1, lokasi;
cout << "Masukkan panjang array: ";
cin >> a;
int array[a];
cout << "Masukkan " << a << " angka\n";
for (i = 0; i < a; i++)
{
cout << "Array ke-" << (i) << ": ";
cin >> array[i];
}
maks = array[0];
for (i = 0; i < a; i++)
{
if (array[i] > maks)
{
maks = array[i];
lokasi = i;
}
}
cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}
```
Program tersebut meminta pengguna untuk memasukkan panjang array dan elemen-elemen array tersebut. Setelah memasukkan elemen, program mencari nilai maksimum dalam array tersebut dan menampilkan nilai maksimum beserta posisinya dalam array. Program ini menggunakan loop untuk mengiterasi melalui elemen-elemen array dan mencari nilai maksimum dengan membandingkan setiap elemen dengan nilai maksimum yang sedang disimpan. Setelah menemukan nilai maksimum, program menampilkan nilai maksimum dan posisinya dalam array.

### Output
<img width="424" alt="image" src="https://github.com/FahmiHidayat2/Praktikum-Struktur-Data-Modul-2/assets/161399477/f21e0fc8-6fc5-467a-9c45-17ecb2f42e12">

## Unguided 

### 1. <img width="388" alt="image" src="https://github.com/FahmiHidayat2/Praktikum-Struktur-Data-Modul-2/assets/161399477/cbdf3af0-92e5-455d-9240-00b2485a6cc1">


```C++
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Masukkan panjang array: ";
    std::cin >> n;

    std::vector<int> array(n);

    std::cout << "Masukkan " << n << " angka: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    std::cout << "Data Array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << array[i];
        if (i < n - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Nomor Genap: ";
    for (int i = 0; i < n; ++i) {
        if (array[i] % 2 == 0) {
            std::cout << array[i];
            if (i < n - 1) {
                std::cout << ", ";
            }
        }
    }
    std::cout << std::endl;

    std::cout << "Nomor Ganjil: ";
    for (int i = 0; i < n; ++i) {
        if (array[i] % 2 != 0) {
            std::cout << array[i];
            if (i < n - 1) {
                std::cout << ", ";
            }
        }
    }
    std::cout << std::endl;

    return 0;
}
```

Kode di atas meminta pengguna untuk memasukkan panjang array dan elemen-elemen array tersebut. Setelah memasukkan elemen, program menampilkan seluruh elemen array, kemudian memisahkan dan menampilkan angka genap dan ganjil yang terdapat dalam array tersebut. Program ini menggunakan vektor sebagai struktur data untuk menyimpan array dinamis. Kemudian, program melakukan iterasi melalui vektor untuk menampilkan elemen-elemen array, memeriksa apakah elemen tersebut genap atau ganjil, dan menampilkannya sesuai dengan kriteria tersebut.

#### Output:
<img width="404" alt="image" src="https://github.com/FahmiHidayat2/Praktikum-Struktur-Data-Modul-2/assets/161399477/a0098a7b-7d26-441c-9c1d-84daf6979d5c">

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```C++
#include <iostream>
using namespace std;

int main() {
    int x_size, y_size, z_size;

    // Meminta input panjang sisi array tiga dimensi
    cout << "Masukkan panjang sisi x: ";
    cin >> x_size;
    cout << "Masukkan panjang sisi y: ";
    cin >> y_size;
    cout << "Masukkan panjang sisi z: ";
    cin >> z_size;

    // Deklarasi array tiga dimensi sesuai dengan ukuran yang dimasukkan oleh pengguna
    int arr[x_size][y_size][z_size];

    // Input elemen array
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "]: ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    // Output Array
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "]: " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;

    // Tampilan array
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << arr[x][y][z] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
```
Kode di atas meminta pengguna untuk memasukkan panjang sisi x, y, dan z dari array tiga dimensi. Kemudian, array tiga dimensi dideklarasikan sesuai dengan ukuran yang dimasukkan oleh user. Selanjutnya, kode meminta pengguna untuk memasukkan elemen-elemen array, menampilkan elemen array, dan menampilkan array dalam format yang lebih mudah dibaca.

#### Output
<img width="400" alt="image" src="https://github.com/FahmiHidayat2/Praktikum-Struktur-Data-Modul-2/assets/161399477/a607c886-b1a9-4eff-bdd0-aa36f1917174">

#### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

```C++
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
```
Kode di atas meminta pengguna untuk memasukkan panjang array dan elemen-elemen array. Kemudian, program menampilkan menu yang memungkinkan pengguna untuk memilih opsi untuk mencari nilai maksimum, minimum, dan rata-rata dari array. Setiap opsi diimplementasikan dalam kasus switch yang sesuai dengan pilihan pengguna. Program akan terus menampilkan menu hingga pengguna memilih untuk keluar (opsi 4).

#### Output
<img width="357" alt="image" src="https://github.com/FahmiHidayat2/Praktikum-Struktur-Data-Modul-2/assets/161399477/38a0cd14-9dc9-4a17-8a59-03daa99566ad">

## Kesimpulan
Dalam praktikum ini, telah dipelajari konsep dasar tentang tipe data array dalam berbagai dimensi, mulai dari array satu dimensi hingga array lima dimensi. Dilakukan pula implementasi penggunaan array dalam program-program sederhana, seperti program untuk input array tiga dimensi dan program untuk mencari nilai maksimum, minimum, dan rata-rata dari suatu array. Selain itu, telah dibuat juga sebuah program menu yang memberikan pengguna pilihan untuk melakukan operasi-operasi tertentu terhadap array, seperti mencari nilai maksimum, minimum, dan rata-rata. Praktikum ini memberikan pemahaman yang baik tentang penggunaan array dan kemampuan dalam memanipulasi data dalam struktur array.

## Referensi
[1]	J. Sihombing, “Penerapan Stack Dan Queue Pada Array Dan Linked List Dalam Java,” J. Ilm. Infokom, vol. 7, no. 2, pp. 15–24, 2019.
