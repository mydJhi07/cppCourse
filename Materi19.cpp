#include <iostream>

int main()
{
    int number; // Mendeklarasikan variabel tanpa memberi nilai awal

    // Lakukan ini DULU...
    do
    {
        std::cout << "Masukkan sebuah angka positif: ";
        std::cin >> number;
    }
    // ...KEMUDIAN cek kondisinya. Jika angkanya negatif, ulangi!
    // Catatan: Jangan lupa tanda TITIK KOMA (;) di akhir perintah while pada do-while.
    while (number < 0);

    std::cout << "\nBagus! Angka yang kamu masukkan adalah: " << number << '\n';

    return 0;
}