// Kalkulator Indeks Massa Tubuh (IMT)

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double berat;
    double tinggi;
    double bmi;

    std::cin >> berat >> tinggi;
    bmi = berat / pow(tinggi, 2);
    std::cout << "BMI = " << std::fixed << std::setprecision(2) << bmi << " | ";

    if (bmi < 18.5)
    {
        std::cout << "Kurus\n";
    }
    else if (bmi >= 18.5 || bmi < 25)
    {
        std::cout << "Normal\n";
    }
    else if (bmi >= 25 || bmi < 30)
    {
        std::cout << "Gemuk\n";
    }
    else if (bmi >= 30)
    {
        std::cout << "Obesitas\n";
    }
    return 0;
}