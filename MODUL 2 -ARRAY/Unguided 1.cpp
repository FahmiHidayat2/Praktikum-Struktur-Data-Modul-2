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
