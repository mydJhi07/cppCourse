#include <iostream>

int main()
{
    // 1. Menghitung maju dari 1 sampai 3
    std::cout << "Menghitung maju:\n";
    for (int i = 1; i <= 3; i++)
    {
        std::cout << "Putaran ke-" << i << '\n';
    }

    std::cout << "\n--------------------\n\n";

    // 2. Hitung mundur Tahun Baru (Dari 10 ke 1)
    std::cout << "Hitung mundur Tahun Baru:\n";
    for (int i = 10; i >= 1; i--)
    {
        std::cout << i << '\n';
    }

    // Baris ini dieksekusi SETELAH perulangan di atas selesai (i sudah mencapai 0)
    std::cout << "SELAMAT TAHUN BARU!\n";

    return 0;
}