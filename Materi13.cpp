// Projek

#include <iostream>

int main()
{
    char op;
    double angka1;
    double angka2;
    double hasil;

    std::cout << "========== Kalkulator ==========\n";

    std::cout << "Masukkan sebuah operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Masukkan angka pertama: ";
    std::cin >> angka1;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka2;

    switch (op)
    {
    case '+':
        hasil = angka1 + angka2;
        std::cout << "Hasilnya = " << hasil << '\n';
        break;
    case '-':
        hasil = angka1 - angka2;
        std::cout << "Hasilnya = " << hasil << '\n';
        break;
    case '*':
        hasil = angka1 * angka2;
        std::cout << "Hasilnya = " << hasil << '\n';
        break;
    case '/':
    {
        if (angka2 == 0)
        {
            std::cout << "Error, tidak terdefinisi" << '\n';
        }
        else
        {
            hasil = angka1 / angka2;
            std::cout << "Hasilnya = " << hasil << '\n';
        }
        break;
    }
    default:
        std::cout << "Operator yang anda masukkan tidak valid" << '\n';
    }

    return 0;
}