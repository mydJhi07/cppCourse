#include <iostream>

int main()
{

    std::cout << "--- DEMONSTRASI BREAK ---\n";
    // Perulangan untuk menghitung 1 sampai 20
    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            std::cout << "[Terkena BREAK di angka 13! Keluar dari perulangan]\n";
            break; // Menghancurkan perulangan sepenuhnya
        }
        std::cout << i << " ";
    }
    std::cout << "\n\n";

    std::cout << "--- DEMONSTRASI CONTINUE ---\n";
    // Perulangan untuk menghitung 1 sampai 20
    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            std::cout << "[Terkena CONTINUE! Angka 13 dilewati] ";
            continue; // Melewati angka 13 dan lanjut ke angka 14
        }
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}