#include <iostream>
#include <string>

/*  Kata kunci typedef digunakan untuk membuat nama tambahan (seperti nama panggilan atau nickname) untuk tipe data yang sudah ada. 
    Fitur ini memungkinkan kamu untuk membuat pengidentifikasi baru (alias) dari tipe data bawaan C++ maupun tipe data buatan 
    sendiri. */

// --- CARA 1: Menggunakan typedef (Cara Lama) ---
// Pola: typedef <tipe_data_asli> <nama_alias>;
typedef std::string text_t;
typedef int number_t;

// --- CARA 2: Menggunakan using (Cara Modern/Disarankan) ---
// Pola: using <nama_alias> = <tipe_data_asli>;
using text_t = std::string;
using number_t = int;

int main() {
    // Sekarang kita bisa menggunakan 'text_t' sebagai pengganti 'std::string'
    text_t firstName = "Bro";

    // Dan menggunakan 'number_t' sebagai pengganti 'int'
    number_t age = 21;

    // Menampilkan hasil (sama persis seperti menggunakan std::string dan int)
    std::cout << "Halo " << firstName << '\n';
    std::cout << "Umur kamu " << age << " tahun\n";

    return 0;
}

/*  penggunaan typedef sudah mulai ditinggalkan dan digantikan oleh kata kunci using.

    Alasannya, kata kunci using jauh lebih cocok saat disandingkan dengan templates (sebuah fitur tingkat lanjut di C++). 
    Selain itu, sintaks using lebih mudah dibaca karena gayanya mirip dengan cara kita mendeklarasikan variabel 
    (menggunakan tanda sama dengan). */