#include <iostream>
#include <cmath>

int main()
{
    double massa = 0;
    double kecepatan = 0;
    std::cin >> massa >> kecepatan;

    double energiKinetik = round((double)1 / 2 * massa * pow(kecepatan, 2) * 100) / 100;

    std::cout << "Energi Kinetik = " << energiKinetik << " Joule";

    return 0;
}