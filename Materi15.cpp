#include <iostream>

int main()
{
    int temp = 25;       // Suhu dalam Celcius
    bool isSunny = true; // Apakah matahari bersinar?

    // 1. Menggunakan AND (&&)
    /*  Operator AND dilambangkan dengan dua simbol ampersand (&&). Operator ini digunakan ketika kamu ingin sebuah blok kode
        dieksekusi hanya jika SEMUA kondisi bernilai BENAR. Jika ada satu saja yang salah, maka secara otomatis dianggap salah
        seluruhnya. */
    // Suhu harus di antara 0 DAN 30 agar kondisi terpenuhi
    if (temp > 0 && temp < 30)
    {
        std::cout << "Suhu saat ini ideal.\n";
    }
    else
    {
        std::cout << "Suhu saat ini ekstrem.\n";
    }

    // 2. Menggunakan OR (||)
    /*  Operator OR dilambangkan dengan dua simbol garis vertikal / pipe (||). Operator ini mengeksekusi kode jika MINIMAL ADA
        SATU kondisi yang bernilai BENAR. Ia hanya akan dianggap salah jika seluruh kondisinya salah. */
    // Salah satu ekstrem (sangat dingin ATAU sangat panas) memicu peringatan
    if (temp <= 0 || temp >= 30)
    {
        std::cout << "Peringatan: Cuaca buruk!\n";
    }
    else
    {
        std::cout << "Peringatan: Cuaca normal.\n";
    }

    // 3. Menggunakan NOT (!)
    /*  Operator NOT dilambangkan dengan tanda seru (!). Operator ini berfungsi memutarbalikkan logika dari sebuah operand
        (khususnya untuk tipe data Boolean). Jika kondisinya awalnya true (benar), maka diubah menjadi false (salah), dan
        sebaliknya. */
    // Membalik nilai true menjadi false (Mengecek "Apakah TIDAK cerah?")
    if (!isSunny)
    {
        std::cout << "Langit sedang mendung di luar.\n";
    }
    else
    {
        std::cout << "Langit sedang cerah di luar.\n";
    }

    return 0;
}