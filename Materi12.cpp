#include <iostream>

/*  switch adalah bentuk percabangan lain yang berfungsi sebagai alternatif yang lebih rapi dan efisien daripada menulis banyak
    sekali rentetan else if. switch sangat cocok digunakan ketika kamu perlu membandingkan satu nilai yang sama dengan banyak
    kemungkinan nilai yang cocok secara presisi. */

int main()
{
    int month;
    std::cout << "Masukkan angka bulan (1-12): ";
    std::cin >> month;

    // Memeriksa variabel 'month'
    switch (month)
    {
    case 1:
        std::cout << "Ini bulan Januari\n";
        break; // Keluar dari switch
    case 2:
        std::cout << "Ini bulan Februari\n";
        break;
    case 3:
        std::cout << "Ini bulan Maret\n";
        break;
    case 4:
        std::cout << "Ini bulan April\n";
        break;
    // ... (kasus 5 sampai 11 dilewati agar singkat) ...
    case 12:
        std::cout << "Ini bulan Desember\n";
        break;
    default:
        // Akan dieksekusi jika user memasukkan angka selain 1-12 (misal: 42)
        std::cout << "Tolong masukkan hanya angka 1-12!\n";
    }

    return 0;
}

/*  Keunggulan if-else:

    Bisa mengecek rentang nilai (contoh: >, <, >=).

    Bisa memproses logika yang kompleks (contoh: mengecek 2 variabel berbeda dengan && atau ||).

    Mendukung semua tipe data, termasuk nilai desimal (double).

    Keunggulan switch:

    Penulisan kode jauh lebih rapi dan ringkas jika kamu membandingkan satu variabel yang sama secara berulang-ulang.

    Eksekusi umumnya lebih cepat pada percabangan yang sangat banyak, karena kompiler C++ sering mengonversinya menjadi jump table di
    dalam memori. */