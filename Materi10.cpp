// Projek

#include <iostream>
#include <cmath>
#include <limits>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double panjang1 = 0;
    double panjang2 = 0;

    cout << "Masukkan Nilai Panjang vetikal: ";
    cin >> panjang1;

    cout << "Masukkan Nilai Panjang Horizontal: ";
    cin >> panjang2;

    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    double hypotenusa = sqrt(pow(panjang1, 2) + pow(panjang2, 2));
    cout << "Nilai hypotenusa segitiga tersebut adalah: " << hypotenusa << '\n';

    return 0;
}