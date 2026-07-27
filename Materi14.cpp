#include <iostream>

int main()
{
    // 1. CONTOH DASAR (Mengeksekusi baris perintah)
    int grade = 75;
    std::cout << "1. Status Ujian: ";
    grade >= 60 ? std::cout << "Lulus\n" : std::cout << "Gagal\n";

    // 2. CONTOH MENGEMBALIKAN NILAI (Lebih ringkas)
    // C++ akan mengevaluasi "Apakah number habis dibagi 2?".
    // Teks hasil evaluasi akan langsung diteruskan ke std::cout
    int number = 8;
    std::cout << "2. Angka " << number << " adalah bilangan: "
              << (number % 2 == 0 ? "Genap" : "Ganjil") << '\n';

    // 3. CONTOH BOOLEAN
    // Jika variabel berupa bool, kamu tidak perlu menulis "hungry == true".
    // Cukup tulis nama variabelnya saja (Tanya: "Apakah dia lapar?").
    bool hungry = true;
    std::cout << "3. Perutku terasa: ";
    hungry ? std::cout << "Lapar\n" : std::cout << "Kenyang\n";

    return 0;
}