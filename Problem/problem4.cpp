#include <iostream>

int main()
{
    int jumlahDetik = 0;
    int jam = 0;
    int menit = 0;
    int detik = 0;

    std::cin >> jumlahDetik;

    jam = jumlahDetik / 3600;
    menit = (jumlahDetik % 3600) / 60;
    detik = jumlahDetik % 60;

    std::cout << jam << ":" << menit << ":" << detik << ":" << std::endl;

    return 0;
}