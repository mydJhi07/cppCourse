#include <iostream>

/*  Type Conversion adalah proses mengubah sebuah nilai dari satu tipe data ke tipe data lainnya. Ada dua cara untuk melakukan
    ini: Implicit (Otomatis) dan Explicit (Manual). */

int main()
{
    // --- 1. IMPLICIT CONVERSION (Otomatis) ---
    // Double ke Int (desimal dipotong)
    int pi_implicit = 3.14;
    std::cout << "Nilai 3.14 sebagai int: " << pi_implicit << '\n'; // Output: 3

    // Int ke Char (berdasarkan tabel ASCII)
    char huruf = 100;
    std::cout << "Angka 100 sebagai char: " << huruf << '\n'; // Output: d

    // --- 2. EXPLICIT CONVERSION (Manual / Casting) ---
    std::cout << "Angka 100 di-cast manual ke char: " << (char)100 << '\n'; // Output: d

    // --- 3. KASUS NYATA (Mencegah Integer Division) ---
    int benar = 8;
    int totalSoal = 10;

    // Salah (akan menghasilkan 0% karena desimal terpotong)
    double skorSalah = (benar / totalSoal) * 100;

    // Benar (menambahkan Explicit Cast 'double' mencegah pemotongan desimal)
    double skorBenar = (benar / (double)totalSoal) * 100;

    std::cout << "Hasil skor tanpa cast: " << skorSalah << "%\n";  // Output: 0%
    std::cout << "Hasil skor dengan cast: " << skorBenar << "%\n"; // Output: 80%

    return 0;
}