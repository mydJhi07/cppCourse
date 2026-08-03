#include <iostream>

const float PI = 3.14159;

int main()
{

    int pilihan = 0;
    float radius = 0;
    float luas = 0;
    float keliling = 0;

    do
    {
        std::cout << "1. Luas Lingkaran\n";
        std::cout << "2. Keliling Lingkaran\n";
        std::cout << "3. Keluar\n\n";
        std::cout << "Pilihan: ";
        std::cin >> pilihan;

        switch (pilihan)
        {
        case 1:
        {
            std::cout << "Jari-jari: ";
            std::cin >> radius;
            luas = PI * (radius * radius);
            std::cout << "Luas: " << luas << '\n';
            std::cout << std::endl;
            break;
        }
        case 2:
        {
            std::cout << "Jari-jari: ";
            std::cin >> radius;
            keliling = 2 * PI * radius;
            std::cout << "Keliling: " << keliling << '\n';
            std::cout << std::endl;
            break;
        }
        case 3:
        {
            std::cout << std::endl;
            break;
        }
        default:
        {
            std::cout << "Pilihan tidak valid\n";
            std::cout << std::endl;
        }
        }

    } while (pilihan != 3);

    return 0;
}