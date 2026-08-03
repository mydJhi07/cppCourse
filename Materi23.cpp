#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}

/*  Angka Pseudo-Random (Semu): Komputer tidak bisa memikirkan angka yang benar-benar acak secara alami. Ia menggunakan rumus
    matematika untuk menghasilkan angka yang seolah-olah acak (pseudo-random).

    Pentingnya Seed (srand): Karena menggunakan rumus pasti, komputer butuh angka "bibit" (seed) sebagai titik awal perhitungan.
    Jika seed-nya tidak diubah, urutan angka "acak" yang dikeluarkan akan selalu sama persis setiap kali program dijalankan. Kita
    mengatur seed ini menggunakan fungsi srand().

    Waktu Komputer sebagai Seed (time(0)): Agar seed-nya selalu berubah, programmer menggunakan waktu sistem komputer yang terus
    berdetak setiap detiknya. Dengan perintah srand(time(0)), kita memastikan urutan angka acaknya selalu baru dan berbeda.
    (Untuk menggunakan ini, wajib menambahkan library #include <ctime>).

    Memanggil Angka (rand): Setelah mesin pengacak disetel dengan seed waktu, kita baru bisa memanggil fungsi rand() untuk
    mengeluarkan satu angka acak. Secara bawaan, angka yang keluar sangat besar (rentang 0 hingga 32.767).

    Membatasi Rentang Angka (Modulus %): Untuk mengecilkan angkanya sesuai kebutuhan (misal hanya butuh angka dadu 1-6),
    gunakan operasi sisa bagi/modulus (%). Contohnya: (rand() % 6) + 1. Modulus 6 akan membatasi hasil dari 0 sampai 5,
    kemudian ditambah 1 agar menjadi rentang 1 sampai 6. */