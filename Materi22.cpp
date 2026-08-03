#include <iostream>

int main()
{
    int rows;
    int columns;
    char symbol;

    std::cout << "Berapa banyak baris? ";
    std::cin >> rows;

    std::cout << "Berapa banyak kolom? ";
    std::cin >> columns;

    std::cout << "Masukkan simbol yang ingin digunakan: ";
    std::cin >> symbol;
    std::cout << "\n";

    // OUTER LOOP (Perulangan Luar) - Mengurus Baris (Ke Bawah)
    for (int i = 1; i <= rows; i++)
    {

        // INNER LOOP (Perulangan Dalam) - Mengurus Kolom (Ke Samping)
        for (int j = 1; j <= columns; j++)
        {
            // Mencetak simbol TANPA enter, jadi akan berjejer ke samping
            std::cout << symbol << " ";
        }

        // Setelah satu putaran Inner Loop selesai (satu baris penuh tercetak),
        // kita paksa pindah ke baris baru sebelum Outer Loop memulai putaran berikutnya.
        std::cout << '\n';
    }

    return 0;
}
