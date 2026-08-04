#include <iostream>

int main()
{
    double a;
    double b;
    char op;

    std::cin >> a >> op >> b;

    switch (op)
    {
    case '+':
        std::cout << "Hasil = " << a + b << '\n';
        break;
    case '-':
        std::cout << "Hasil = " << a - b << '\n';
        break;
    case '*':
        std::cout << "Hasil = " << a * b << '\n';
        break;
    case '/':
        if (b == 0)
        {
            std::cout << "Error: pembagian dengan nol\n";
        }
        else
        {
            std::cout << "Hasil = " << a / b << '\n';
        }
        break;
    default:
        std::cout << "Operator tidak valid\n";
    }

    return 0;
}