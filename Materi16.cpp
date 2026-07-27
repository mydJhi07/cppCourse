// Projek

#include <iostream>

int main()
{

    double temp;
    char unit;

    std::cout << "===== Konversi Suhu =====\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";

    std::cout << "Anda ingin mengonversikannya ke satuan apa: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Masukkan suhunya dalam Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        std::cout << "Suhunya adalah: " << temp << "Fahrenheit";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Masukkan suhunya dalam Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Suhunya adalah: " << temp << "Celsius\n";
    }
    else
    {
        std::cout << "Anda memasukkan unit yang tidak valid\n";
    }

    return 0;
}