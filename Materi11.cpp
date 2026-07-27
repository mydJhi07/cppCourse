#include <iostream>

/*  Pernyataan If adalah salah satu konsep paling fundamental dalam pemrograman yang memungkinkan programmu membuat keputusan.
    Cara kerjanya persis seperti logika sebab-akibat: "Jika suatu kondisi terpenuhi (benar), maka lakukan sesuatu. Jika tidak,
    abaikan." */

int main()
{
    int age;

    std::cout << "Masukkan umur Anda: ";
    std::cin >> age;

    // Program mengecek dari atas ke bawah. Begitu menemukan kondisi yang BENAR,
    // ia akan mengeksekusi kodenya lalu MELOMPATI semua sisa pengecekan di bawahnya.

    if (age >= 100)
    {
        // Kondisi pertama: Paling spesifik / batas tertinggi
        std::cout << "Anda terlalu tua untuk memasuki situs ini.\n";
    }
    else if (age >= 18)
    {
        // Kondisi kedua: Akan dicek jika umur di bawah 100
        std::cout << "Selamat datang di situs!\n";
    }
    else if (age < 0)
    {
        // Kondisi ketiga: Menangani input tidak masuk akal (angka negatif)
        std::cout << "Anda belum lahir!\n";
    }
    else
    {
        // Kondisi terakhir: Jika semua pengecekan di atas bernilai SALAH
        // Berarti umurnya berada di rentang 0 sampai 17
        std::cout << "Maaf, Anda belum cukup umur untuk masuk.\n";
    }

    return 0;
}