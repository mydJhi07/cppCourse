#include <iostream>

int main()
{
    const int konversiJarak = 1000;
    const int konversiWaktu = 3600;

    double jarak = 0;
    double waktu = 0;

    std::cin >> jarak >> waktu;

    double kecepatan = (jarak * konversiJarak) / (waktu * konversiWaktu);
    std::cout << "Kecepatan = " << kecepatan << " m/s\n";

    return 0;
}
